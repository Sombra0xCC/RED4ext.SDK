#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/input/InputSystemWin32Base.hpp>

namespace RED4ext
{
namespace input { 
struct InputSystemWin32Game : input::InputSystemWin32Base
{
    static constexpr const char* NAME = "inputInputSystemWin32Game";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk180[0x1278 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(InputSystemWin32Game, 0x1278);
} // namespace input
} // namespace RED4ext
