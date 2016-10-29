#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// Platforms
struct Platforms_t4284597824;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Continue
struct  Continue_t3792408775  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Continue::coinOption
	GameObject_t3674682005 * ___coinOption_2;
	// UnityEngine.GameObject Continue::adOption
	GameObject_t3674682005 * ___adOption_3;
	// UnityEngine.GameObject Continue::continueOption
	GameObject_t3674682005 * ___continueOption_4;
	// System.Boolean Continue::toggle
	bool ___toggle_5;
	// UnityEngine.RectTransform Continue::adOptionRect
	RectTransform_t972643934 * ___adOptionRect_6;
	// UnityEngine.RectTransform Continue::coinOptionRect
	RectTransform_t972643934 * ___coinOptionRect_7;
	// Platforms Continue::platforms
	Platforms_t4284597824 * ___platforms_8;
	// UnityEngine.UI.Text Continue::coinText
	Text_t9039225 * ___coinText_9;

public:
	inline static int32_t get_offset_of_coinOption_2() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___coinOption_2)); }
	inline GameObject_t3674682005 * get_coinOption_2() const { return ___coinOption_2; }
	inline GameObject_t3674682005 ** get_address_of_coinOption_2() { return &___coinOption_2; }
	inline void set_coinOption_2(GameObject_t3674682005 * value)
	{
		___coinOption_2 = value;
		Il2CppCodeGenWriteBarrier(&___coinOption_2, value);
	}

	inline static int32_t get_offset_of_adOption_3() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___adOption_3)); }
	inline GameObject_t3674682005 * get_adOption_3() const { return ___adOption_3; }
	inline GameObject_t3674682005 ** get_address_of_adOption_3() { return &___adOption_3; }
	inline void set_adOption_3(GameObject_t3674682005 * value)
	{
		___adOption_3 = value;
		Il2CppCodeGenWriteBarrier(&___adOption_3, value);
	}

	inline static int32_t get_offset_of_continueOption_4() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___continueOption_4)); }
	inline GameObject_t3674682005 * get_continueOption_4() const { return ___continueOption_4; }
	inline GameObject_t3674682005 ** get_address_of_continueOption_4() { return &___continueOption_4; }
	inline void set_continueOption_4(GameObject_t3674682005 * value)
	{
		___continueOption_4 = value;
		Il2CppCodeGenWriteBarrier(&___continueOption_4, value);
	}

	inline static int32_t get_offset_of_toggle_5() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___toggle_5)); }
	inline bool get_toggle_5() const { return ___toggle_5; }
	inline bool* get_address_of_toggle_5() { return &___toggle_5; }
	inline void set_toggle_5(bool value)
	{
		___toggle_5 = value;
	}

	inline static int32_t get_offset_of_adOptionRect_6() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___adOptionRect_6)); }
	inline RectTransform_t972643934 * get_adOptionRect_6() const { return ___adOptionRect_6; }
	inline RectTransform_t972643934 ** get_address_of_adOptionRect_6() { return &___adOptionRect_6; }
	inline void set_adOptionRect_6(RectTransform_t972643934 * value)
	{
		___adOptionRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___adOptionRect_6, value);
	}

	inline static int32_t get_offset_of_coinOptionRect_7() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___coinOptionRect_7)); }
	inline RectTransform_t972643934 * get_coinOptionRect_7() const { return ___coinOptionRect_7; }
	inline RectTransform_t972643934 ** get_address_of_coinOptionRect_7() { return &___coinOptionRect_7; }
	inline void set_coinOptionRect_7(RectTransform_t972643934 * value)
	{
		___coinOptionRect_7 = value;
		Il2CppCodeGenWriteBarrier(&___coinOptionRect_7, value);
	}

	inline static int32_t get_offset_of_platforms_8() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___platforms_8)); }
	inline Platforms_t4284597824 * get_platforms_8() const { return ___platforms_8; }
	inline Platforms_t4284597824 ** get_address_of_platforms_8() { return &___platforms_8; }
	inline void set_platforms_8(Platforms_t4284597824 * value)
	{
		___platforms_8 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_8, value);
	}

	inline static int32_t get_offset_of_coinText_9() { return static_cast<int32_t>(offsetof(Continue_t3792408775, ___coinText_9)); }
	inline Text_t9039225 * get_coinText_9() const { return ___coinText_9; }
	inline Text_t9039225 ** get_address_of_coinText_9() { return &___coinText_9; }
	inline void set_coinText_9(Text_t9039225 * value)
	{
		___coinText_9 = value;
		Il2CppCodeGenWriteBarrier(&___coinText_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
