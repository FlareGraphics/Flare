#include <io.h>
#include "debug/debug.h"

void IO::start() const {
    if (!glfwInit()) {
        FLARE_DEBUG_ERROR("Could not init glfw!");
    }
}


void IO::stop() const {
    glfwTerminate();
}
