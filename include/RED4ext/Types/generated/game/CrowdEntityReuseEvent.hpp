#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdEntityReuseEvent : red::Event
{
    static constexpr const char* NAME = "gameCrowdEntityReuseEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CrowdEntityReuseEvent, 0x40);
} // namespace game
} // namespace RED4ext
