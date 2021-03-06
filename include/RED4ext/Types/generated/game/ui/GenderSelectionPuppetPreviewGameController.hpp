#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/PuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GenderSelectionPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiGenderSelectionPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkGenderSelectionPuppetPreviewGameController";

    uint8_t unk1B0[0x1B8 - 0x1B0]; // 1B0
};
RED4EXT_ASSERT_SIZE(GenderSelectionPuppetPreviewGameController, 0x1B8);
} // namespace game::ui
using inkGenderSelectionPuppetPreviewGameController = game::ui::GenderSelectionPuppetPreviewGameController;
} // namespace RED4ext
