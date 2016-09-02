cmake_minimum_required(VERSION 3.3)
project(Flare)

include(external/libs.cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE FLARE_LIB_SOURCES "*.cpp")
list(REMOVE_ITEM FLARE_LIB_SOURCES "main.cpp")
file(GLOB_RECURSE SOURCES "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")


add_executable(Flare ${SOURCES} ${HEADERS})
add_library(libflare STATIC ${FLARE_LIB_SOURCES} ${HEADERS})

target_link_libraries(Flare ${ALL_LIBS})
target_link_libraries(libflare ${ALL_LIBS})

