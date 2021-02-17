#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Types/generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_CurveVectorValue : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_CurveVectorValue";
    static constexpr const char* ALIAS = NAME;

    CurveData<Vector4> curveData; // 48
    anim::FloatLink argument; // 80
};
RED4EXT_ASSERT_SIZE(AnimNode_CurveVectorValue, 0xA0);
} // namespace anim
} // namespace RED4ext