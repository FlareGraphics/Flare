cmake_minimum_required(VERSION 3.3)
project(Flare)

include(external/libs.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions(-DFLARE_DEBUG_ENABLED)

file(GLOB_RECURSE FLARE_LIB_SOURCES "libflare/sources/*")
file(GLOB_RECURSE FLARE_LIB_HEADERS "libflare/includes/*")

include_directories(libflare/includes)


add_executable(Flare main.cpp)
add_library(libflare STATIC ${FLARE_LIB_SOURCES} ${HEADERS})

target_link_libraries(libflare ${ALL_LIBS})
target_link_libraries(Flare libflare)

