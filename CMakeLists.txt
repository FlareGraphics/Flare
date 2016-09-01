cmake_minimum_required(VERSION 3.3)
project(Flare)

include(libs/libs.cmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCES "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")
file(GLOB_RECURSE SHADERS "*.glsl")

add_executable(Flare ${SOURCES} ${HEADERS} ${SHADERS})
target_link_libraries(Flare ${ALL_LIBS})