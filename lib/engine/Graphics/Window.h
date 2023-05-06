/**
 * @file Window.h
 * @author Anurag Kompalli
 *
 *
 */

#ifndef AIGYM_WINDOW_H
#define AIGYM_WINDOW_H

#include <GLFW/glfw3.h>
#include <Event/EventListener.h>
#include <string>
#include <vector>

namespace Engine::Graphics {
    class Window {
    private:
        GLFWwindow* mWindow;

        std::vector<const std::shared_ptr<Event::EventListener>> mListeners;

        int mWidth, mHeight;

        std::string mWindowName;
    public:
        Window();

        Window(int width, int height, std::string windowName);

        int CreateWindow();

        void AddListener(std::shared_ptr<Event::EventListener> el);

        bool WindowShouldClose();

        void Update() const;

        void PropagateEvent(Event::Event& e) const;

        void Close() const;

    };
}

#endif //AIGYM_WINDOW_H
