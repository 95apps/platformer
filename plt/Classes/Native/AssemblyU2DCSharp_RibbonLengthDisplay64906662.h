#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RibbonLengthDisplay
struct  RibbonLengthDisplay_t64906662  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text RibbonLengthDisplay::ribbonLength
	Text_t9039225 * ___ribbonLength_2;
	// Player RibbonLengthDisplay::player
	Player_t2393081601 * ___player_3;

public:
	inline static int32_t get_offset_of_ribbonLength_2() { return static_cast<int32_t>(offsetof(RibbonLengthDisplay_t64906662, ___ribbonLength_2)); }
	inline Text_t9039225 * get_ribbonLength_2() const { return ___ribbonLength_2; }
	inline Text_t9039225 ** get_address_of_ribbonLength_2() { return &___ribbonLength_2; }
	inline void set_ribbonLength_2(Text_t9039225 * value)
	{
		___ribbonLength_2 = value;
		Il2CppCodeGenWriteBarrier(&___ribbonLength_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(RibbonLengthDisplay_t64906662, ___player_3)); }
	inline Player_t2393081601 * get_player_3() const { return ___player_3; }
	inline Player_t2393081601 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Player_t2393081601 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
