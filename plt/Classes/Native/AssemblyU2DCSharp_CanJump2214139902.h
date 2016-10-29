#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CanJump
struct  CanJump_t2214139902  : public MonoBehaviour_t667441552
{
public:
	// Player CanJump::player
	Player_t2393081601 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CanJump_t2214139902, ___player_2)); }
	inline Player_t2393081601 * get_player_2() const { return ___player_2; }
	inline Player_t2393081601 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t2393081601 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
