#include <window.h>
#include "debug/debug.h"

Window::Window(int width, int height, char const *title, GLFWmonitor *monitor,
        GLFWwindow *share) {
    GLFWwindow* window = glfwCreateWindow(width, height, title, monitor, share);
    if (!window) {
        FLARE_DEBUG_ERROR("Could not create a new window!");
    }
    m_window = window;
}

Window::~Window() {
    glfwDestroyWindow(m_window);
}

void Window::setCloseCallback(closeCallback callback) const {
    FLARE_DEBUG_PRINT("SET");
    glfwSetWindowCloseCallback(m_window, callback); 
}
