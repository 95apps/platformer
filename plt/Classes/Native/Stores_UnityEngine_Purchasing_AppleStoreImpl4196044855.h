#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_t3523691829;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t2443194981;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.Purchasing.AppleStoreImpl
struct AppleStoreImpl_t4196044855;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2986617270;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "Stores_UnityEngine_Purchasing_NativeJSONStore2563949344.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AppleStoreImpl
struct  AppleStoreImpl_t4196044855  : public NativeJSONStore_t2563949344
{
public:
	// System.Action`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.AppleStoreImpl::m_DeferredCallback
	Action_1_t3523691829 * ___m_DeferredCallback_2;
	// System.Action UnityEngine.Purchasing.AppleStoreImpl::m_RefreshReceiptError
	Action_t3771233898 * ___m_RefreshReceiptError_3;
	// System.Action`1<System.String> UnityEngine.Purchasing.AppleStoreImpl::m_RefreshReceiptSuccess
	Action_1_t403047693 * ___m_RefreshReceiptSuccess_4;
	// System.Action`1<System.Boolean> UnityEngine.Purchasing.AppleStoreImpl::m_RestoreCallback
	Action_1_t872614854 * ___m_RestoreCallback_5;
	// UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.AppleStoreImpl::m_Native
	Il2CppObject * ___m_Native_6;

public:
	inline static int32_t get_offset_of_m_DeferredCallback_2() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855, ___m_DeferredCallback_2)); }
	inline Action_1_t3523691829 * get_m_DeferredCallback_2() const { return ___m_DeferredCallback_2; }
	inline Action_1_t3523691829 ** get_address_of_m_DeferredCallback_2() { return &___m_DeferredCallback_2; }
	inline void set_m_DeferredCallback_2(Action_1_t3523691829 * value)
	{
		___m_DeferredCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_DeferredCallback_2, value);
	}

	inline static int32_t get_offset_of_m_RefreshReceiptError_3() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855, ___m_RefreshReceiptError_3)); }
	inline Action_t3771233898 * get_m_RefreshReceiptError_3() const { return ___m_RefreshReceiptError_3; }
	inline Action_t3771233898 ** get_address_of_m_RefreshReceiptError_3() { return &___m_RefreshReceiptError_3; }
	inline void set_m_RefreshReceiptError_3(Action_t3771233898 * value)
	{
		___m_RefreshReceiptError_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefreshReceiptError_3, value);
	}

	inline static int32_t get_offset_of_m_RefreshReceiptSuccess_4() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855, ___m_RefreshReceiptSuccess_4)); }
	inline Action_1_t403047693 * get_m_RefreshReceiptSuccess_4() const { return ___m_RefreshReceiptSuccess_4; }
	inline Action_1_t403047693 ** get_address_of_m_RefreshReceiptSuccess_4() { return &___m_RefreshReceiptSuccess_4; }
	inline void set_m_RefreshReceiptSuccess_4(Action_1_t403047693 * value)
	{
		___m_RefreshReceiptSuccess_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefreshReceiptSuccess_4, value);
	}

	inline static int32_t get_offset_of_m_RestoreCallback_5() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855, ___m_RestoreCallback_5)); }
	inline Action_1_t872614854 * get_m_RestoreCallback_5() const { return ___m_RestoreCallback_5; }
	inline Action_1_t872614854 ** get_address_of_m_RestoreCallback_5() { return &___m_RestoreCallback_5; }
	inline void set_m_RestoreCallback_5(Action_1_t872614854 * value)
	{
		___m_RestoreCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_RestoreCallback_5, value);
	}

	inline static int32_t get_offset_of_m_Native_6() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855, ___m_Native_6)); }
	inline Il2CppObject * get_m_Native_6() const { return ___m_Native_6; }
	inline Il2CppObject ** get_address_of_m_Native_6() { return &___m_Native_6; }
	inline void set_m_Native_6(Il2CppObject * value)
	{
		___m_Native_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Native_6, value);
	}
};

struct AppleStoreImpl_t4196044855_StaticFields
{
public:
	// Uniject.IUtil UnityEngine.Purchasing.AppleStoreImpl::util
	Il2CppObject * ___util_7;
	// UnityEngine.Purchasing.AppleStoreImpl UnityEngine.Purchasing.AppleStoreImpl::instance
	AppleStoreImpl_t4196044855 * ___instance_8;
	// UnityEngine.Purchasing.UnityPurchasingCallback UnityEngine.Purchasing.AppleStoreImpl::<>f__mg$cache0
	UnityPurchasingCallback_t2986617270 * ___U3CU3Ef__mgU24cache0_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Purchasing.AppleStoreImpl::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_10;

public:
	inline static int32_t get_offset_of_util_7() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855_StaticFields, ___util_7)); }
	inline Il2CppObject * get_util_7() const { return ___util_7; }
	inline Il2CppObject ** get_address_of_util_7() { return &___util_7; }
	inline void set_util_7(Il2CppObject * value)
	{
		___util_7 = value;
		Il2CppCodeGenWriteBarrier(&___util_7, value);
	}

	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855_StaticFields, ___instance_8)); }
	inline AppleStoreImpl_t4196044855 * get_instance_8() const { return ___instance_8; }
	inline AppleStoreImpl_t4196044855 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(AppleStoreImpl_t4196044855 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier(&___instance_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline UnityPurchasingCallback_t2986617270 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline UnityPurchasingCallback_t2986617270 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(UnityPurchasingCallback_t2986617270 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_10() { return static_cast<int32_t>(offsetof(AppleStoreImpl_t4196044855_StaticFields, ___U3CU3Ef__switchU24map0_10)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_10() const { return ___U3CU3Ef__switchU24map0_10; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_10() { return &___U3CU3Ef__switchU24map0_10; }
	inline void set_U3CU3Ef__switchU24map0_10(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
