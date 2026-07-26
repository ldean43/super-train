#include "./GLWindow.h"
#include <GLFW/glfw3.h>
#include <string>
#include <stdexcept>

GLWindow::GLWindow(int width, int height, std::string title) {
    // Initialize GLFW.
    if (!glfwInit()) { 
        throw std::runtime_error("glfw not initialized"); 
    }

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);

    // Verify window was properly created.
    if (!window) { 
        throw std::runtime_error("window failed to initialize");
    }
}

GLWindow::~GLWindow() {
    if (window) glfwDestroyWindow(window);
}

void GLWindow::Run(double rate) {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        // render
        glfwSwapBuffers(window);
    }
}

int GLWindow::Width() const {
    return width;
}

int GLWindow::Height() const {
    return height;
}