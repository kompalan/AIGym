/**
 * @file Window.cpp
 * @author Anurag Kompalli
 */

#define GLFW_INCLUDE_VULKAN
#include <vulkan/vulkan.h>
#include <iostream>
#include "Window.h"
#include "Log.h"

using Engine::Graphics::Window;
using Engine::Log;
using Engine::Event::Event;

Window::Window()
{
    mWidth = 800;
    mHeight = 600;
    mWindowName = "Example Name";
}

Window::Window(int width, int height, std::string windowName)
{
    mWidth = width;
    mHeight = height;
    mWindowName = windowName;
}

int Window::CreateWindow()
{
    Log::Info("Starting GLFW");
    if(!glfwInit())
    {
        Log::Error("GLFW Failed to Start");
        return -1;
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    //uint32_t extensionCount = 0;
    //vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    Log::Info("Creating Window");
    mWindow = glfwCreateWindow(mWidth, mHeight, mWindowName.c_str(), glfwGetPrimaryMonitor(), NULL);
    return 0;
}

void Window::AddListener(const std::shared_ptr<Event::EventListener> el)
{
    mListeners.push_back(el);
}

void Window::PropagateEvent(Event::Event& e) const
{
    for(const auto &listener : mListeners)
    {
        listener->OnEvent(e);
    }
}

bool Engine::Graphics::Window::WindowShouldClose()
{
    return glfwWindowShouldClose(mWindow) != 0;
}

void Window::Update() const
{
    glfwPollEvents();
}


void Window::Close() const
{
    glfwDestroyWindow(mWindow);
    glfwTerminate();
}





