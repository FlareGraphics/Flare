#include <iostream>
#include <dummy.h>
#include <io.h>
#include <window.h>
#include <GLFW/glfw3.h>
#include "libflare/sources/debug/debug.h"

void printMemesOnClose(GLFWwindow *window) {
    FLARE_DEBUG_PRINT("CLOSING");
    glfwDestroyWindow(window);
}

int main() {
    IO myIO;
    myIO.start();
    Window myWindow(720, 480, "MyWindow", NULL, NULL);
    myWindow.setCloseCallback(printMemesOnClose);
    while(!glfwWindowShouldClose(myWindow.getGLFWWindow())) {
       
    }

    myIO.stop();
    return EXIT_SUCCESS;
}

