#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/GodModeType.hpp>

namespace RED4ext
{
namespace game { 
struct GodModeData
{
    static constexpr const char* NAME = "gameGodModeData";
    static constexpr const char* ALIAS = "GodModeData";

    game::GodModeType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName source; // 08
};
RED4EXT_ASSERT_SIZE(GodModeData, 0x10);
} // namespace game
using GodModeData = game::GodModeData;
} // namespace RED4ext
