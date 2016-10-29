#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Platform
struct Platform_t1939328147;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullets
struct  Bullets_t1898369937  : public MonoBehaviour_t667441552
{
public:
	// Platform Bullets::platform
	Platform_t1939328147 * ___platform_2;
	// System.Single Bullets::timer
	float ___timer_3;
	// System.Boolean Bullets::spawnBullets
	bool ___spawnBullets_4;

public:
	inline static int32_t get_offset_of_platform_2() { return static_cast<int32_t>(offsetof(Bullets_t1898369937, ___platform_2)); }
	inline Platform_t1939328147 * get_platform_2() const { return ___platform_2; }
	inline Platform_t1939328147 ** get_address_of_platform_2() { return &___platform_2; }
	inline void set_platform_2(Platform_t1939328147 * value)
	{
		___platform_2 = value;
		Il2CppCodeGenWriteBarrier(&___platform_2, value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(Bullets_t1898369937, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_spawnBullets_4() { return static_cast<int32_t>(offsetof(Bullets_t1898369937, ___spawnBullets_4)); }
	inline bool get_spawnBullets_4() const { return ___spawnBullets_4; }
	inline bool* get_address_of_spawnBullets_4() { return &___spawnBullets_4; }
	inline void set_spawnBullets_4(bool value)
	{
		___spawnBullets_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
