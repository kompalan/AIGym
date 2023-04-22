cmake_minimum_required(VERSION 3.15)
project(AIGym VERSION 0.0.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)

find_package(Vulkan REQUIRED)

include_directories(${Vulkan_INCLUDE_DIRS})
add_subdirectory(lib/spdlog)
add_subdirectory(lib/glfw)
add_subdirectory(lib/engine)
add_subdirectory(src)


