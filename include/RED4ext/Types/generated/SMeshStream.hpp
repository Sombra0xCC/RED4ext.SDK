#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/EMeshStreamType.hpp>

namespace RED4ext
{
struct SMeshStream
{
    static constexpr const char* NAME = "SMeshStream";
    static constexpr const char* ALIAS = NAME;

    DeferredDataBuffer data; // 00
    EMeshStreamType type; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(SMeshStream, 0x60);
} // namespace RED4ext
