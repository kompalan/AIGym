set(SOURCE_FILES main.C)
add_executable(aigym main.C)
target_link_libraries(aigym PUBLIC engine spdlog::spdlog glfw ${Vulkan_LIBRARIES})