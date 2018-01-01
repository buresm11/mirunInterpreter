# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )

# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 14)

# set variable pointing to the antlr tool that supports C++
set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.7.1-complete.jar)
# add external build for antlrcpp
include( ExternalAntlr4Cpp )
# add antrl4cpp artifacts to project environment
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

FILE(GLOB parser_files ${PROJECT_SOURCE_DIR}/grammar/*.cpp)

# export generated cpp files into list
 foreach(generated_file ${parser_files})
   list(APPEND gsrc ${generated_file})
   set_source_files_properties(
    ${generated_file}
    PROPERTIES
    COMPILE_FLAGS -Wno-overloaded-virtual
    )
endforeach(generated_file)


FILE(GLOB src_files ${PROJECT_SOURCE_DIR}/src/*.cpp)

# export generated cpp files into list
 foreach(src_file ${src_files})
   list(APPEND ssrc ${src_file})
   set_source_files_properties(
    ${src_file}
    PROPERTIES
    COMPILE_FLAGS -Wno-overloaded-virtual
    )
endforeach(src_file)


message("xsss" ${ssrc})

  # export generated include directory
  set(antlr4cpp_include_dirs_${antlr4cpp_project_namespace} ${ANTLR4CPP_GENERATED_SRC_DIR}/${antlr4cpp_project_namespace})
  message(STATUS "Antlr4Cpp ${antlr4cpp_project_namespace} include: ${ANTLR4CPP_GENERATED_SRC_DIR}/${antlr4cpp_project_namespace}")

include_directories(${PROJECT_SOURCE_DIR}/grammar)
include_directories(${PROJECT_SOURCE_DIR}/src)

# add generated grammar to demo binary target
add_executable(test_antlr main.cpp ${gsrc} ${ssrc})
add_dependencies(test_antlr antlr4cpp)
target_link_libraries(test_antlr antlr4-runtime)