#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Action>
struct List_1_t844452154;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t123536753;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t2240800406;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.UnityUtil
struct  UnityUtil_t1184763057  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> UnityEngine.Purchasing.Extension.UnityUtil::pauseListeners
	List_1_t2240800406 * ___pauseListeners_5;

public:
	inline static int32_t get_offset_of_pauseListeners_5() { return static_cast<int32_t>(offsetof(UnityUtil_t1184763057, ___pauseListeners_5)); }
	inline List_1_t2240800406 * get_pauseListeners_5() const { return ___pauseListeners_5; }
	inline List_1_t2240800406 ** get_address_of_pauseListeners_5() { return &___pauseListeners_5; }
	inline void set_pauseListeners_5(List_1_t2240800406 * value)
	{
		___pauseListeners_5 = value;
		Il2CppCodeGenWriteBarrier(&___pauseListeners_5, value);
	}
};

struct UnityUtil_t1184763057_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityEngine.Purchasing.Extension.UnityUtil::s_Callbacks
	List_1_t844452154 * ___s_Callbacks_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Purchasing.Extension.UnityUtil::s_CallbacksPending
	bool ___s_CallbacksPending_3;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> UnityEngine.Purchasing.Extension.UnityUtil::s_PcControlledPlatforms
	List_1_t123536753 * ___s_PcControlledPlatforms_4;

public:
	inline static int32_t get_offset_of_s_Callbacks_2() { return static_cast<int32_t>(offsetof(UnityUtil_t1184763057_StaticFields, ___s_Callbacks_2)); }
	inline List_1_t844452154 * get_s_Callbacks_2() const { return ___s_Callbacks_2; }
	inline List_1_t844452154 ** get_address_of_s_Callbacks_2() { return &___s_Callbacks_2; }
	inline void set_s_Callbacks_2(List_1_t844452154 * value)
	{
		___s_Callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Callbacks_2, value);
	}

	inline static int32_t get_offset_of_s_CallbacksPending_3() { return static_cast<int32_t>(offsetof(UnityUtil_t1184763057_StaticFields, ___s_CallbacksPending_3)); }
	inline bool get_s_CallbacksPending_3() const { return ___s_CallbacksPending_3; }
	inline bool* get_address_of_s_CallbacksPending_3() { return &___s_CallbacksPending_3; }
	inline void set_s_CallbacksPending_3(bool value)
	{
		___s_CallbacksPending_3 = value;
	}

	inline static int32_t get_offset_of_s_PcControlledPlatforms_4() { return static_cast<int32_t>(offsetof(UnityUtil_t1184763057_StaticFields, ___s_PcControlledPlatforms_4)); }
	inline List_1_t123536753 * get_s_PcControlledPlatforms_4() const { return ___s_PcControlledPlatforms_4; }
	inline List_1_t123536753 ** get_address_of_s_PcControlledPlatforms_4() { return &___s_PcControlledPlatforms_4; }
	inline void set_s_PcControlledPlatforms_4(List_1_t123536753 * value)
	{
		___s_PcControlledPlatforms_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_PcControlledPlatforms_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
