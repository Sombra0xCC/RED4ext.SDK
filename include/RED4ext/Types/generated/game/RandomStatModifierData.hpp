#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/StatModifierData.hpp>

namespace RED4ext
{
namespace game { 
struct RandomStatModifierData : game::StatModifierData
{
    static constexpr const char* NAME = "gameRandomStatModifierData";
    static constexpr const char* ALIAS = NAME;

    float value; // 48
    uint8_t unk4C[0x58 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(RandomStatModifierData, 0x58);
} // namespace game
} // namespace RED4ext
