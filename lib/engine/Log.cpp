/**
 * @file Log.cpp
 * @author Anurag Kompalli
 */

#include "Log.h"
#include "spdlog/spdlog.h"

using Engine::Log;

void Log::Info(const std::string& message)
{
    spdlog::info(message);
}

void Log::Warn(const std::string& message)
{
    spdlog::warn(message);
}

void Log::Error(const std::string& message)
{
    spdlog::critical(message);
}
