#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct ColorInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimColorInterpolator";
    static constexpr const char* ALIAS = "inkAnimColor";

    uint8_t unk68[0x70 - 0x68]; // 68
    HDRColor startValue; // 70
    HDRColor endValue; // 80
};
RED4EXT_ASSERT_SIZE(ColorInterpolator, 0x90);
} // namespace ink::anim
using inkAnimColor = ink::anim::ColorInterpolator;
} // namespace RED4ext
