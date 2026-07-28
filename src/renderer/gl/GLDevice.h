#pragma once

#include "../Device.h"
#include "GLWindow.h"
#include <string>
#include <memory>

/**
 * @brief OpenGL implementation of @ref Device.
 * 
 */
class GLDevice : public Device {
    public:
        std::unique_ptr<GLWindow> CreateWindow(int width, int height, std::string title) const;
    private:
        GLWindow* CreateWindowImpl(int width, int height, std::string title) const;
};