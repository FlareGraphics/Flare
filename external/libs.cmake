message("Load libraries")

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})

# Load GLFW3
find_package(GLFW3 REQUIRED)
include_directories(${GLFW3_INCLUDE_DIRS})
add_definitions(${GLFW3_DEFINITIONS})
if(NOT GLFW3_FOUND)
    message(ERROR " GLFW3 not found!")
endif()

# Load GLEW
find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})
link_directories(${GLEW_LIBRARY_DIRS})
add_definitions(-DGLEW_STATIC)

# Load OPENGL
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif()

# Load GLM
find_package(GLM REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})
if(NOT GLM_FOUND)
    message(ERROR " GLM not found!")
endif()
# force glm to use radians for compatibility issues.
add_definitions(-DGLM_FORCE_RADIANS)

# Regroup all libs into one variable
SET(ALL_LIBS ${OPENGL_LIBRARIES} ${GLFW3_LIBRARIES} ${GLEW_LIBRARIES})
message("Libraries loaded successfully")