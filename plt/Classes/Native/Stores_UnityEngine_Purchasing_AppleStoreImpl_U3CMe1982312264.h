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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AppleStoreImpl/<MessageCallback>c__AnonStorey0
struct  U3CMessageCallbackU3Ec__AnonStorey0_t1982312264  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.AppleStoreImpl/<MessageCallback>c__AnonStorey0::subject
	String_t* ___subject_0;
	// System.String UnityEngine.Purchasing.AppleStoreImpl/<MessageCallback>c__AnonStorey0::payload
	String_t* ___payload_1;
	// System.String UnityEngine.Purchasing.AppleStoreImpl/<MessageCallback>c__AnonStorey0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.AppleStoreImpl/<MessageCallback>c__AnonStorey0::transactionId
	String_t* ___transactionId_3;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(U3CMessageCallbackU3Ec__AnonStorey0_t1982312264, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier(&___subject_0, value);
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(U3CMessageCallbackU3Ec__AnonStorey0_t1982312264, ___payload_1)); }
	inline String_t* get_payload_1() const { return ___payload_1; }
	inline String_t** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(String_t* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier(&___payload_1, value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CMessageCallbackU3Ec__AnonStorey0_t1982312264, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier(&___receipt_2, value);
	}

	inline static int32_t get_offset_of_transactionId_3() { return static_cast<int32_t>(offsetof(U3CMessageCallbackU3Ec__AnonStorey0_t1982312264, ___transactionId_3)); }
	inline String_t* get_transactionId_3() const { return ___transactionId_3; }
	inline String_t** get_address_of_transactionId_3() { return &___transactionId_3; }
	inline void set_transactionId_3(String_t* value)
	{
		___transactionId_3 = value;
		Il2CppCodeGenWriteBarrier(&___transactionId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
