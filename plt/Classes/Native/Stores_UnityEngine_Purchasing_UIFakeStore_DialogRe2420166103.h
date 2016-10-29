#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t3623733033;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct  DialogRequest_t2420166103  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::QueryText
	String_t* ___QueryText_0;
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::OkayButtonText
	String_t* ___OkayButtonText_1;
	// System.String UnityEngine.Purchasing.UIFakeStore/DialogRequest::CancelButtonText
	String_t* ___CancelButtonText_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.UIFakeStore/DialogRequest::Options
	List_1_t1375417109 * ___Options_3;
	// System.Action`2<System.Boolean,System.Int32> UnityEngine.Purchasing.UIFakeStore/DialogRequest::Callback
	Action_2_t3623733033 * ___Callback_4;

public:
	inline static int32_t get_offset_of_QueryText_0() { return static_cast<int32_t>(offsetof(DialogRequest_t2420166103, ___QueryText_0)); }
	inline String_t* get_QueryText_0() const { return ___QueryText_0; }
	inline String_t** get_address_of_QueryText_0() { return &___QueryText_0; }
	inline void set_QueryText_0(String_t* value)
	{
		___QueryText_0 = value;
		Il2CppCodeGenWriteBarrier(&___QueryText_0, value);
	}

	inline static int32_t get_offset_of_OkayButtonText_1() { return static_cast<int32_t>(offsetof(DialogRequest_t2420166103, ___OkayButtonText_1)); }
	inline String_t* get_OkayButtonText_1() const { return ___OkayButtonText_1; }
	inline String_t** get_address_of_OkayButtonText_1() { return &___OkayButtonText_1; }
	inline void set_OkayButtonText_1(String_t* value)
	{
		___OkayButtonText_1 = value;
		Il2CppCodeGenWriteBarrier(&___OkayButtonText_1, value);
	}

	inline static int32_t get_offset_of_CancelButtonText_2() { return static_cast<int32_t>(offsetof(DialogRequest_t2420166103, ___CancelButtonText_2)); }
	inline String_t* get_CancelButtonText_2() const { return ___CancelButtonText_2; }
	inline String_t** get_address_of_CancelButtonText_2() { return &___CancelButtonText_2; }
	inline void set_CancelButtonText_2(String_t* value)
	{
		___CancelButtonText_2 = value;
		Il2CppCodeGenWriteBarrier(&___CancelButtonText_2, value);
	}

	inline static int32_t get_offset_of_Options_3() { return static_cast<int32_t>(offsetof(DialogRequest_t2420166103, ___Options_3)); }
	inline List_1_t1375417109 * get_Options_3() const { return ___Options_3; }
	inline List_1_t1375417109 ** get_address_of_Options_3() { return &___Options_3; }
	inline void set_Options_3(List_1_t1375417109 * value)
	{
		___Options_3 = value;
		Il2CppCodeGenWriteBarrier(&___Options_3, value);
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(DialogRequest_t2420166103, ___Callback_4)); }
	inline Action_2_t3623733033 * get_Callback_4() const { return ___Callback_4; }
	inline Action_2_t3623733033 ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(Action_2_t3623733033 * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___Callback_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
