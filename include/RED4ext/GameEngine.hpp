#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CBaseEngine
{
    virtual void sub_0() = 0;
    virtual void sub_8() = 0;
    virtual void sub_10() = 0;
    virtual ~CBaseEngine() = 0;
    virtual void sub_18() = 0;
    virtual void sub_28() = 0;
    virtual void sub_30() = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;
    virtual void sub_68() = 0;
    virtual void sub_70() = 0;
    virtual void sub_78() = 0;
    virtual void sub_80() = 0;
    virtual void sub_88() = 0;
    virtual void sub_90() = 0;
    virtual void sub_98() = 0;
    virtual void sub_A0() = 0;
    virtual void sub_A8() = 0;
    virtual void sub_B0() = 0;
    virtual void sub_B8() = 0;
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;
    virtual void sub_D0() = 0;
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;

    int8_t unk8[0x218];
};

RED4EXT_ASSERT_SIZE(CBaseEngine, 0x220);

struct BaseGameEngine : CBaseEngine
{
    int8_t unk220[0x18];
};

RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x238);
RED4EXT_ASSERT_OFFSET(BaseGameEngine, unk220, 0x220);

struct CGameEngine : BaseGameEngine
{
    struct CGameFramework
    {
        struct GameInstance
        {
            virtual ~GameInstance() = 0;
            virtual uintptr_t GetTypeInstance(const uintptr_t aClass) = 0;
        };

        RED4EXT_ASSERT_SIZE(GameInstance, 0x8);

        int8_t unk0[0x10];
        GameInstance* gameInstance;
    };

    static CGameEngine* Get();

    int8_t unk238[0x28];
    CGameFramework* framework;
    int8_t unk268[0x30];
};

RED4EXT_ASSERT_SIZE(CGameEngine, 0x298);
RED4EXT_ASSERT_OFFSET(CGameEngine, unk238, 0x238);
RED4EXT_ASSERT_OFFSET(CGameEngine, framework, 0x260);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GameEngine-inl.hpp>
#endif