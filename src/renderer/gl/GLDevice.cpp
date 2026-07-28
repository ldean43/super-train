#include "GLDevice.h"
#include "../Window.h"
#include <string>
#include <memory>

std::unique_ptr<GLWindow> GLDevice::CreateWindow(int width, int height, std::string title) const {
    return std::unique_ptr<GLWindow>(CreateWindowImpl(width, height, title));
}

GLWindow* GLDevice::CreateWindowImpl(int width, int height, std::string title) const {
    return new GLWindow(width, height, title);
}