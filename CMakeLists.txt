cmake_minimum_required(VERSION 3.30.0)
project(cpptings VERSION 0.1.0 LANGUAGES C CXX)

# source files
set(SOURCE_FILES main.cpp hello.cpp)

#add_executable(cpptings main.cpp clang_format.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})


#include(CTest)
#enable_testing()

