#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/user/SettingsVar.hpp>

namespace RED4ext
{
namespace user { 
struct SettingsVarName : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarName";
    static constexpr const char* ALIAS = "ConfigVarName";

};
RED4EXT_ASSERT_SIZE(SettingsVarName, 0x48);
} // namespace user
using ConfigVarName = user::SettingsVarName;
} // namespace RED4ext
