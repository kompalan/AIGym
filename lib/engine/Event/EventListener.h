/**
 * @file EventListener.h
 * @author Anurag Kompalli
 *
 *
 */

#ifndef AIGYM_EVENTLISTENER_H
#define AIGYM_EVENTLISTENER_H

#include "Event.h"

namespace Engine::Event {
    class EventListener {
    private:

    public:
        EventListener();

        virtual void OnEvent(Event& e) = 0;
    };
}
#endif //AIGYM_EVENTLISTENER_H
