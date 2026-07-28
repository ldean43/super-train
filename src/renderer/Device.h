#pragma once

#include <renderer/Window.h>
#include <string>
#include <memory>

/**
 * @brief Factory for creating GPU resources
 * 
 */
class Device {
    public:
        virtual void Initialize() = 0;
        virtual void Terminate() = 0;
        std::unique_ptr<Window> CreateWindow(int width, int height, std::string title) const;

    private:
        virtual Window* CreateWindowImpl(int width, int height, std::string title) const = 0;
};