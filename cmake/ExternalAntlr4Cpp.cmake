# -*- mode:cmake -*-
#
# This Cmake file is for those using a superbuild Cmake Pattern, it
# will download the tools and build locally
#
# use 2the antlr4cpp_process_grammar to support multiple grammars in the
# same project
#
# - Getting quicky started with Antlr4cpp
#
# Here is how you can use this external project to create the antlr4cpp
# demo to start your project off.
#
# create your project source folder somewhere. e.g. ~/srcfolder/
# + make a subfolder cmake
# + Copy this file to srcfolder/cmake
# + cut below and use it to create srcfolder/CMakeLists.txt,
# + from https://github.com/DanMcLaughlin/antlr4/tree/master/runtime/Cpp/demo Copy main.cpp, TLexer.g4 and TParser.g4 to ./srcfolder/
#
# next make a build folder e.g. ~/buildfolder/
# from the buildfolder, run cmake ~/srcfolder; make
#
###############################################################
# # minimum required CMAKE version
# CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12.2 FATAL_ERROR)
#
# LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )
#
# # compiler must be 11 or 14
# SET (CMAKE_CXX_STANDARD 11)
#
# # set variable pointing to the antlr tool that supports C++
# set(ANTLR4CPP_JAR_LOCATION /home/user/antlr4-4.5.4-SNAPSHOT.jar)
# # add external build for antlrcpp
# include( ExternalAntlr4Cpp )
# # add antrl4cpp artifacts to project environment
# include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
# link_directories( ${ANTLR4CPP_LIBS} )
# message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")
#
# # Call macro to add lexer and grammar to your build dependencies.
# antlr4cpp_process_grammar(demo antlrcpptest
#   ${CMAKE_CURRENT_SOURCE_DIR}/TLexer.g4
#   ${CMAKE_CURRENT_SOURCE_DIR}/TParser.g4)
# # include generated files in project environment
# include_directories(${antlr4cpp_include_dirs_antlrcpptest})
#
# # add generated grammar to demo binary target
# add_executable(demo main.cpp ${antlr4cpp_src_files_antlrcpptest})
# add_dependencies(demo antlr4cpp antlr4cpp_generation_antlrcpptest)
# target_link_libraries(demo antlr4-runtime)
#
###############################################################

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12.2)
PROJECT(antlr4cpp_fetcher CXX)
INCLUDE(ExternalProject)

# only JRE required
FIND_PACKAGE(Java COMPONENTS Runtime REQUIRED)

############ Download and Generate runtime #################
set(ANTLR4CPP_EXTERNAL_ROOT ${CMAKE_BINARY_DIR}/externals/antlr4cpp)
set(ANTLR4CPP_LOCAL_ROOT ${CMAKE_BINARY_DIR}/locals/antlr4cpp)

SET(ANTLR4CPP_LOCAL_REPO ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr4-cpp-runtime-4.7.1-source.zip)

if(NOT EXISTS "${ANTLR4CPP_JAR_LOCATION}")
  message(FATAL_ERROR "Unable to find antlr tool. ANTLR4CPP_JAR_LOCATION:${ANTLR4CPP_JAR_LOCATION}")
endif()

# default path for source files
if (NOT ANTLR4CPP_GENERATED_SRC_DIR)
  set(ANTLR4CPP_GENERATED_SRC_DIR ${CMAKE_BINARY_DIR}/antlr4cpp_generated_src)
endif()

# download runtime environment
ExternalProject_ADD(
  #--External-project-name------
  antlr4cpp
  #--Depend-on-antrl-tool-----------
  # DEPENDS antlrtool
  #--Core-directories-----------
  PREFIX             ${ANTLR4CPP_LOCAL_ROOT}
  #--Download step--------------
  URL                 ${ANTLR4CPP_LOCAL_REPO}
  # GIT_REPOSITORY     ${ANTLR4CPP_EXTERNAL_REPO}
  # GIT_TAG          ${ANTLR4CPP_EXTERNAL_TAG}
  TIMEOUT            10
  LOG_DOWNLOAD       ON
  #--Update step----------
  # UPDATE_COMMAND     ${GIT_EXECUTABLE} pull
  #--Patch step----------
  # PATCH_COMMAND sh -c "cp <SOURCE_DIR>/scripts/CMakeLists.txt <SOURCE_DIR>"
  #--Configure step-------------
  CONFIGURE_COMMAND  ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Release -DANTLR4CPP_JAR_LOCATION=${ANTLR4CPP_JAR_LOCATION} -DBUILD_SHARED_LIBS=ON -BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX:PATH=<INSTALL_DIR> -DCMAKE_SOURCE_DIR:PATH=<SOURCE_DIR>/runtime/Cpp <SOURCE_DIR>/runtime/Cpp
  LOG_CONFIGURE ON
  #--Build step-----------------
  # BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
  LOG_BUILD ON
  #--Install step---------------
  # INSTALL_COMMAND    ""
  # INSTALL_DIR ${CMAKE_BINARY_DIR}/
  #--Install step---------------
  # INSTALL_COMMAND    ""
)

ExternalProject_Get_Property(antlr4cpp INSTALL_DIR)

list(APPEND ANTLR4CPP_INCLUDE_DIRS ${INSTALL_DIR}/include/antlr4-runtime)
foreach(src_path misc atn dfa tree support)
  list(APPEND ANTLR4CPP_INCLUDE_DIRS ${INSTALL_DIR}/include/antlr4-runtime/${src_path})
endforeach(src_path)

set(ANTLR4CPP_LIBS "${INSTALL_DIR}/lib")

# antlr4_shared ${INSTALL_DIR}/lib/libantlr4-runtime.so
# antlr4_static ${INSTALL_DIR}/lib/libantlr4-runtime.a

############ Generate runtime #################
# macro to add dependencies to target
#
# Param 1 project name
# Param 1 namespace (postfix for dependencies)
# Param 2 Lexer file (full path)
# Param 3 Parser File (full path)
#
# output
#
# antlr4cpp_src_files_{namespace} - src files for add_executable
# antlr4cpp_include_dirs_{namespace} - include dir for generated headers
# antlr4cpp_generation_{namespace} - for add_dependencies tracking