#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Bullets
struct Bullets_t1898369937;
// Platform
struct Platform_t1939328147;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2000900386  : public MonoBehaviour_t667441552
{
public:
	// Bullets Bullet::bullets
	Bullets_t1898369937 * ___bullets_2;
	// Platform Bullet::platform
	Platform_t1939328147 * ___platform_3;
	// UnityEngine.Rigidbody Bullet::rb
	Rigidbody_t3346577219 * ___rb_4;
	// System.Single Bullet::countDown
	float ___countDown_5;
	// UnityEngine.Vector3 Bullet::forceDirection
	Vector3_t4282066566  ___forceDirection_6;

public:
	inline static int32_t get_offset_of_bullets_2() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___bullets_2)); }
	inline Bullets_t1898369937 * get_bullets_2() const { return ___bullets_2; }
	inline Bullets_t1898369937 ** get_address_of_bullets_2() { return &___bullets_2; }
	inline void set_bullets_2(Bullets_t1898369937 * value)
	{
		___bullets_2 = value;
		Il2CppCodeGenWriteBarrier(&___bullets_2, value);
	}

	inline static int32_t get_offset_of_platform_3() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___platform_3)); }
	inline Platform_t1939328147 * get_platform_3() const { return ___platform_3; }
	inline Platform_t1939328147 ** get_address_of_platform_3() { return &___platform_3; }
	inline void set_platform_3(Platform_t1939328147 * value)
	{
		___platform_3 = value;
		Il2CppCodeGenWriteBarrier(&___platform_3, value);
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___rb_4)); }
	inline Rigidbody_t3346577219 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t3346577219 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}

	inline static int32_t get_offset_of_countDown_5() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___countDown_5)); }
	inline float get_countDown_5() const { return ___countDown_5; }
	inline float* get_address_of_countDown_5() { return &___countDown_5; }
	inline void set_countDown_5(float value)
	{
		___countDown_5 = value;
	}

	inline static int32_t get_offset_of_forceDirection_6() { return static_cast<int32_t>(offsetof(Bullet_t2000900386, ___forceDirection_6)); }
	inline Vector3_t4282066566  get_forceDirection_6() const { return ___forceDirection_6; }
	inline Vector3_t4282066566 * get_address_of_forceDirection_6() { return &___forceDirection_6; }
	inline void set_forceDirection_6(Vector3_t4282066566  value)
	{
		___forceDirection_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
