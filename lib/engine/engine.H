#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <Event/EventListener.h>
#include <Graphics/Window.h>

namespace Engine {
    class AIGym : Event::EventListener {
    private:
        std::shared_ptr<Graphics::Window> mWindow;
    public:
        void StartApplication();
        void OnEvent(Event::Event& e);
    };
}

#endif //ENGINE_H
