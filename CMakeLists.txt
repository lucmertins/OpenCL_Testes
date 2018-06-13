cmake_minimum_required(VERSION 2.8.9)
project (TestesOpenCL)

if(NOT EXISTS ${PROJECT_SOURCE_DIR}/bin)
  file(MAKE_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
endif()

if(NOT EXISTS ${PROJECT_SOURCE_DIR}/lib)
  file(MAKE_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
endif()

find_package(OpenCL REQUIRED)
include_directories(${OpenCL_INCLUDE_DIRS})
link_directories(${OpenCL_LIBRARY})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable (Principal ${PROJECT_SOURCE_DIR}/src/Principal.cpp)

target_link_libraries (Principal OpenCL::OpenCL)
