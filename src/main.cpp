#include <iostream>
#include <string>
#include <vector>
#include <renderer/gl/GLWindow.h>
#include <memory>
#include <renderer/gl/GLDevice.h>

int main() {
    std::vector<std::string> parts{"C++", "project", "is", "building"};

    for (const std::string& part : parts) {
        std::cout << part << ' ';
    }
    std::cout << std::endl;
    std::cout << "__cplusplus" << __cplusplus << std::endl;

    const std::unique_ptr<Device> device = std::make_unique<GLDevice>();
    const std::unique_ptr<Window> window = device->CreateWindow(800, 600, "super-train");

    window->Run(60.0);
    return 0;
}