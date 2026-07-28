#pragma once

#include "../Window.h"
#include <string>
#include <GLFW/glfw3.h>

/**
 * @brief GLFW implementation of @ref Window
 * 
 */
class GLWindow : public Window {
    public:
        explicit GLWindow(int width, int height, std::string title);
        ~GLWindow() override;

        void Run(double rate) override;
        int Width() const override;
        int Height() const override;

    private:
        int width;
        int height;
        GLFWwindow* window;
};