cmake_minimum_required(VERSION 3.3)
project(Flare)

include(external/libs.cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE FLARE_LIB_SOURCES "sources/*")
file(GLOB_RECURSE FLARE_LIB_HEADERS "includes/*")

include_directories(includes)


add_executable(Flare main.cpp)
add_library(libflare STATIC ${FLARE_LIB_SOURCES} ${HEADERS})

target_link_libraries(libflare ${ALL_LIBS})
target_link_libraries(Flare libflare)

