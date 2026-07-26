#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> parts{"C++", "project", "is", "building"};

    for (const std::string& part : parts) {
        std::cout << part << ' ';
    }
    std::cout << std::endl;
    std::cout << "__cplusplus" << __cplusplus << std::endl;

    return 0;
}