#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BigScroll
struct  BigScroll_t2968301517  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean BigScroll::centering
	bool ___centering_2;
	// UnityEngine.RectTransform BigScroll::rectTrans
	RectTransform_t972643934 * ___rectTrans_3;

public:
	inline static int32_t get_offset_of_centering_2() { return static_cast<int32_t>(offsetof(BigScroll_t2968301517, ___centering_2)); }
	inline bool get_centering_2() const { return ___centering_2; }
	inline bool* get_address_of_centering_2() { return &___centering_2; }
	inline void set_centering_2(bool value)
	{
		___centering_2 = value;
	}

	inline static int32_t get_offset_of_rectTrans_3() { return static_cast<int32_t>(offsetof(BigScroll_t2968301517, ___rectTrans_3)); }
	inline RectTransform_t972643934 * get_rectTrans_3() const { return ___rectTrans_3; }
	inline RectTransform_t972643934 ** get_address_of_rectTrans_3() { return &___rectTrans_3; }
	inline void set_rectTrans_3(RectTransform_t972643934 * value)
	{
		___rectTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___rectTrans_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
