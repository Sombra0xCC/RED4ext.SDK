#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct WeaponItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataWeaponItem_Record";
    static constexpr const char* ALIAS = "WeaponItem_Record";

    uint8_t unk130[0x178 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(WeaponItem_Record, 0x178);
} // namespace game::data
using WeaponItem_Record = game::data::WeaponItem_Record;
} // namespace RED4ext
