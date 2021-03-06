#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Types/generated/quest/SceneConditionType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest { 
struct SceneNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    quest::SceneConditionType type; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName inputName; // 48
};
RED4EXT_ASSERT_SIZE(SceneNode_ConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
