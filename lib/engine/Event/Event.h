/**
 * @file Event.h
 * @author Anurag Kompalli
 *
 *
 */

#ifndef AIGYM_EVENT_H
#define AIGYM_EVENT_H

#include <vector>

namespace Engine::Event {
    class Event {
    public:
        enum EventType {
            GLFW_WINDOW_CLOSE
        };

        Event(EventType et);

    private:
        EventType mType;
    };
}
#endif //AIGYM_EVENT_H
