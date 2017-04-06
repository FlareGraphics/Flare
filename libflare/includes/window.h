#pragma once

#include <GLFW/glfw3.h>

typedef void(*closeCallback)(GLFWwindow*);

class Window {
    public:
        Window(int width, int height, char const *title, GLFWmonitor *monitor,
                GLFWwindow *share);

        ~Window();

        void setCloseCallback(closeCallback callback) const;

        GLFWwindow* getGLFWWindow() { return m_window; };

    private:
        GLFWwindow *m_window;
};
