#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/LootSlot.hpp>

namespace RED4ext
{
namespace game { 
struct LootSlotSingleItem : game::LootSlot
{
    static constexpr const char* NAME = "gameLootSlotSingleItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemTDBID; // 280
};
RED4EXT_ASSERT_SIZE(LootSlotSingleItem, 0x288);
} // namespace game
} // namespace RED4ext
