cmake_minimum_required(VERSION 3.21) # Must be first line, compatibility gate

project(super-train LANGUAGES C CXX) # Need C for GLAD and GLFW 

## `set` defines a variable in CMake. Variables named `CMAKE_*` are used by CMake internally
set(CMAKE_CXX_STANDARD 20) # Request C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Makes C++20 hard requirement

include(FetchContent) # Enables downloading dependencies at configure time

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.4
    GIT_SHALLOW TRUE # Skip full history
)
FetchContent_MakeAvailable(glfw) # clones into build/_deps and runs its CMakeLists giving us the `glfw` target

add_subdirectory(vendor)

find_package(OpenGL REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp) # Declares build target

# Only let linker link these libraries
target_link_libraries(${PROJECT_NAME} PRIVATE glfw glad OpenGL::GL)