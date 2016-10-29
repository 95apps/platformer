#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DisplayAmountOfCoins
struct DisplayAmountOfCoins_t1212874609;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayAd
struct  PlayAd_t2393080471  : public MonoBehaviour_t667441552
{
public:
	// DisplayAmountOfCoins PlayAd::displayCoins
	DisplayAmountOfCoins_t1212874609 * ___displayCoins_2;

public:
	inline static int32_t get_offset_of_displayCoins_2() { return static_cast<int32_t>(offsetof(PlayAd_t2393080471, ___displayCoins_2)); }
	inline DisplayAmountOfCoins_t1212874609 * get_displayCoins_2() const { return ___displayCoins_2; }
	inline DisplayAmountOfCoins_t1212874609 ** get_address_of_displayCoins_2() { return &___displayCoins_2; }
	inline void set_displayCoins_2(DisplayAmountOfCoins_t1212874609 * value)
	{
		___displayCoins_2 = value;
		Il2CppCodeGenWriteBarrier(&___displayCoins_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
