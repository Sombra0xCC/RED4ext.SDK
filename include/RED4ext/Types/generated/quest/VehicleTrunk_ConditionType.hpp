#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct VehicleTrunk_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleTrunk_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool playerVehicle; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    game::EntityReference vehicleRef; // 40
    game::EntityReference objectRef; // 78
    bool inverted; // B0
    bool isInside; // B1
    bool anyVehicle; // B2
    bool anyObject; // B3
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(VehicleTrunk_ConditionType, 0xB8);
} // namespace quest
} // namespace RED4ext
