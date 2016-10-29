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
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Swiper
struct  Swiper_t2489357464  : public MonoBehaviour_t667441552
{
public:
	// Platform Swiper::platform
	Platform_t1939328147 * ___platform_2;
	// UnityEngine.Rigidbody Swiper::rb
	Rigidbody_t3346577219 * ___rb_3;
	// UnityEngine.Transform Swiper::platformTransform
	Transform_t1659122786 * ___platformTransform_4;

public:
	inline static int32_t get_offset_of_platform_2() { return static_cast<int32_t>(offsetof(Swiper_t2489357464, ___platform_2)); }
	inline Platform_t1939328147 * get_platform_2() const { return ___platform_2; }
	inline Platform_t1939328147 ** get_address_of_platform_2() { return &___platform_2; }
	inline void set_platform_2(Platform_t1939328147 * value)
	{
		___platform_2 = value;
		Il2CppCodeGenWriteBarrier(&___platform_2, value);
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(Swiper_t2489357464, ___rb_3)); }
	inline Rigidbody_t3346577219 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t3346577219 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_platformTransform_4() { return static_cast<int32_t>(offsetof(Swiper_t2489357464, ___platformTransform_4)); }
	inline Transform_t1659122786 * get_platformTransform_4() const { return ___platformTransform_4; }
	inline Transform_t1659122786 ** get_address_of_platformTransform_4() { return &___platformTransform_4; }
	inline void set_platformTransform_4(Transform_t1659122786 * value)
	{
		___platformTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___platformTransform_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
