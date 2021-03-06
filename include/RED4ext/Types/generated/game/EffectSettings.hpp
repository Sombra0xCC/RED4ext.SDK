#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game { 
struct EffectSettings
{
    static constexpr const char* NAME = "gameEffectSettings";
    static constexpr const char* ALIAS = NAME;

    bool advancedTargetHandling; // 00
    bool synchronousProcessingForPlayer; // 01
    bool forceSynchronousProcessing; // 02
    bool tempExecuteOnlyOnce; // 03
};
RED4EXT_ASSERT_SIZE(EffectSettings, 0x4);
} // namespace game
} // namespace RED4ext
