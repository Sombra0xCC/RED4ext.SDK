#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/EDecalRenderMode.hpp>
#include <RED4ext/Types/generated/ERenderObjectType.hpp>
#include <RED4ext/Types/generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Types/generated/RenderDecalOrderPriority.hpp>
#include <RED4ext/Types/generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct IEvaluatorVector;
struct IMaterial;

namespace effect { 
struct TrackItemDecal : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemDecal";
    static constexpr const char* ALIAS = NAME;

    Ref<IMaterial> material; // 48
    Handle<IEvaluatorVector> scale; // 60
    Handle<IEvaluatorVector> emissiveScale; // 70
    float normalThreshold; // 80
    float fadeOutTime; // 84
    float fadeInTime; // 88
    float additionalRotation; // 8C
    int32_t atlasFrameStart; // 90
    int32_t atlasFrameEnd; // 94
    RenderDecalOrderPriority orderPriority; // 98
    ERenderObjectType surfaceType; // 99
    EDecalRenderMode decalRenderMode; // 9A
    bool horizontalFlip; // 9B
    bool verticalFlip; // 9C
    bool randomRotation; // 9D
    bool randomAtlasing; // 9E
    bool isStretchEnabled; // 9F
    bool isAttached; // A0
    RenderDecalNormalsBlendingMode normalsBlendingMode; // A1
    uint8_t unkA2[0xA8 - 0xA2]; // A2
};
RED4EXT_ASSERT_SIZE(TrackItemDecal, 0xA8);
} // namespace effect
} // namespace RED4ext
