set (SOURCE_FILES engine.C engine.H Log.cpp Log.h Event/Event.cpp Event/Event.h Graphics/Window.cpp Graphics/Window.h Event/EventListener.cpp Event/EventListener.h)
add_library(engine SHARED ${SOURCE_FILES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(engine PUBLIC spdlog::spdlog glfw ${Vulkan_LIBRARIES})
