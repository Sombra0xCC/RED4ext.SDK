#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/BaseGameEngine.hpp>

namespace RED4ext
{
struct HeadlessGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "HeadlessGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk268[0x270 - 0x268]; // 268
};
RED4EXT_ASSERT_SIZE(HeadlessGameEngine, 0x270);
} // namespace RED4ext
