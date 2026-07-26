#include <iostream>
#include <string>
#include <vector>
#include <renderer/gl/GLWindow.h>

int main() {
    std::vector<std::string> parts{"C++", "project", "is", "building"};

    for (const std::string& part : parts) {
        std::cout << part << ' ';
    }
    std::cout << std::endl;
    std::cout << "__cplusplus" << __cplusplus << std::endl;

    Window* window = new GLWindow(800, 600, "super-train");
    window->Run(60.0);
    return 0;
}