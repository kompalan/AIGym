/**
 * @file Log.h
 * @author Anurag Kompalli
 *
 *
 */

#ifndef AIGYM_LOG_H
#define AIGYM_LOG_H
#include <string>

namespace Engine {
    class Log {
    private:

    public:
        Log() = default;

        static void Info(const std::string&);

        static void Warn(const std::string&);

        static void Error(const std::string&);
    };
}
#endif //AIGYM_LOG_H
