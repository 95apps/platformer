#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DeathCube
struct DeathCube_t890015913;
// Platform
struct Platform_t1939328147;
// Platforms
struct Platforms_t4284597824;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.BoxCollider
struct BoxCollider_t2538127765;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Floor
struct  Floor_t67974124  : public MonoBehaviour_t667441552
{
public:
	// DeathCube Floor::deathCube
	DeathCube_t890015913 * ___deathCube_2;
	// System.Single Floor::initialCountDown
	float ___initialCountDown_3;
	// System.Single Floor::countDown
	float ___countDown_4;
	// Platform Floor::platform
	Platform_t1939328147 * ___platform_5;
	// Platforms Floor::platforms
	Platforms_t4284597824 * ___platforms_6;
	// UnityEngine.Rigidbody Floor::rb
	Rigidbody_t3346577219 * ___rb_7;
	// UnityEngine.BoxCollider Floor::bc
	BoxCollider_t2538127765 * ___bc_8;

public:
	inline static int32_t get_offset_of_deathCube_2() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___deathCube_2)); }
	inline DeathCube_t890015913 * get_deathCube_2() const { return ___deathCube_2; }
	inline DeathCube_t890015913 ** get_address_of_deathCube_2() { return &___deathCube_2; }
	inline void set_deathCube_2(DeathCube_t890015913 * value)
	{
		___deathCube_2 = value;
		Il2CppCodeGenWriteBarrier(&___deathCube_2, value);
	}

	inline static int32_t get_offset_of_initialCountDown_3() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___initialCountDown_3)); }
	inline float get_initialCountDown_3() const { return ___initialCountDown_3; }
	inline float* get_address_of_initialCountDown_3() { return &___initialCountDown_3; }
	inline void set_initialCountDown_3(float value)
	{
		___initialCountDown_3 = value;
	}

	inline static int32_t get_offset_of_countDown_4() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___countDown_4)); }
	inline float get_countDown_4() const { return ___countDown_4; }
	inline float* get_address_of_countDown_4() { return &___countDown_4; }
	inline void set_countDown_4(float value)
	{
		___countDown_4 = value;
	}

	inline static int32_t get_offset_of_platform_5() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___platform_5)); }
	inline Platform_t1939328147 * get_platform_5() const { return ___platform_5; }
	inline Platform_t1939328147 ** get_address_of_platform_5() { return &___platform_5; }
	inline void set_platform_5(Platform_t1939328147 * value)
	{
		___platform_5 = value;
		Il2CppCodeGenWriteBarrier(&___platform_5, value);
	}

	inline static int32_t get_offset_of_platforms_6() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___platforms_6)); }
	inline Platforms_t4284597824 * get_platforms_6() const { return ___platforms_6; }
	inline Platforms_t4284597824 ** get_address_of_platforms_6() { return &___platforms_6; }
	inline void set_platforms_6(Platforms_t4284597824 * value)
	{
		___platforms_6 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_6, value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___rb_7)); }
	inline Rigidbody_t3346577219 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t3346577219 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}

	inline static int32_t get_offset_of_bc_8() { return static_cast<int32_t>(offsetof(Floor_t67974124, ___bc_8)); }
	inline BoxCollider_t2538127765 * get_bc_8() const { return ___bc_8; }
	inline BoxCollider_t2538127765 ** get_address_of_bc_8() { return &___bc_8; }
	inline void set_bc_8(BoxCollider_t2538127765 * value)
	{
		___bc_8 = value;
		Il2CppCodeGenWriteBarrier(&___bc_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
