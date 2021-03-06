#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct DeviceLoaded : red::Event
{
    static constexpr const char* NAME = "gameDeviceLoaded";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DeviceLoaded, 0x40);
} // namespace game
} // namespace RED4ext
