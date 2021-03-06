#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/GameplayTier.hpp>
#include <RED4ext/Types/generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetTier_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier_NodeType";
    static constexpr const char* ALIAS = NAME;

    GameplayTier tier; // 38
    bool usePlayerWorkspot; // 3C
    bool useEnterAnim; // 3D
    bool useExitAnim; // 3E
    bool forceEmptyHands; // 3F
};
RED4EXT_ASSERT_SIZE(SetTier_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
