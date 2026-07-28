#include "Device.h"
#include "Window.h"
#include <string>
#include <memory>


std::unique_ptr<Window> Device::CreateWindow(int width, int height, std::string title) const {
    return std::unique_ptr<Window>(CreateWindowImpl(width, height, title));
}