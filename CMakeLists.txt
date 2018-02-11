CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )

SET (CMAKE_CXX_STANDARD 11)

set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.7.1-complete.jar)
include( ExternalAntlr4Cpp )
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

FILE(GLOB parser_files ${PROJECT_SOURCE_DIR}/grammar/*.cpp)

foreach(generated_file ${parser_files})
   list(APPEND gsrc ${generated_file})
   set_source_files_properties(
    ${generated_file}
    PROPERTIES
    COMPILE_FLAGS -Wno-overloaded-virtual
    )
endforeach(generated_file)


FILE(GLOB src_files ${PROJECT_SOURCE_DIR}/src/*.cpp)

 foreach(src_file ${src_files})
   list(APPEND ssrc ${src_file})
   set_source_files_properties(
    ${src_file}
    PROPERTIES
    COMPILE_FLAGS -Wno-overloaded-virtual
    )
endforeach(src_file)


set(antlr4cpp_include_dirs_${antlr4cpp_project_namespace} ${ANTLR4CPP_GENERATED_SRC_DIR}/${antlr4cpp_project_namespace})
message(STATUS "Antlr4Cpp ${antlr4cpp_project_namespace} include: ${ANTLR4CPP_GENERATED_SRC_DIR}/${antlr4cpp_project_namespace}")

include_directories(${PROJECT_SOURCE_DIR}/grammar)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(interpreter main.cpp ${gsrc} ${ssrc})
add_dependencies(interpreter antlr4cpp)
target_link_libraries(interpreter antlr4-runtime)