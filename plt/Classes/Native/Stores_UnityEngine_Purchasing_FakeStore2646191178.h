#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1661699449.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode3605244001.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeStore
struct  FakeStore_t2646191178  : public AbstractStore_t1661699449
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.FakeStore::m_Biller
	Il2CppObject * ___m_Biller_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.FakeStore::m_PurchasedProducts
	List_1_t1375417109 * ___m_PurchasedProducts_1;
	// System.Boolean UnityEngine.Purchasing.FakeStore::purchaseCalled
	bool ___purchaseCalled_2;
	// System.String UnityEngine.Purchasing.FakeStore::<unavailableProductId>k__BackingField
	String_t* ___U3CunavailableProductIdU3Ek__BackingField_3;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.FakeStore::UIMode
	int32_t ___UIMode_4;

public:
	inline static int32_t get_offset_of_m_Biller_0() { return static_cast<int32_t>(offsetof(FakeStore_t2646191178, ___m_Biller_0)); }
	inline Il2CppObject * get_m_Biller_0() const { return ___m_Biller_0; }
	inline Il2CppObject ** get_address_of_m_Biller_0() { return &___m_Biller_0; }
	inline void set_m_Biller_0(Il2CppObject * value)
	{
		___m_Biller_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Biller_0, value);
	}

	inline static int32_t get_offset_of_m_PurchasedProducts_1() { return static_cast<int32_t>(offsetof(FakeStore_t2646191178, ___m_PurchasedProducts_1)); }
	inline List_1_t1375417109 * get_m_PurchasedProducts_1() const { return ___m_PurchasedProducts_1; }
	inline List_1_t1375417109 ** get_address_of_m_PurchasedProducts_1() { return &___m_PurchasedProducts_1; }
	inline void set_m_PurchasedProducts_1(List_1_t1375417109 * value)
	{
		___m_PurchasedProducts_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_PurchasedProducts_1, value);
	}

	inline static int32_t get_offset_of_purchaseCalled_2() { return static_cast<int32_t>(offsetof(FakeStore_t2646191178, ___purchaseCalled_2)); }
	inline bool get_purchaseCalled_2() const { return ___purchaseCalled_2; }
	inline bool* get_address_of_purchaseCalled_2() { return &___purchaseCalled_2; }
	inline void set_purchaseCalled_2(bool value)
	{
		___purchaseCalled_2 = value;
	}

	inline static int32_t get_offset_of_U3CunavailableProductIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FakeStore_t2646191178, ___U3CunavailableProductIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CunavailableProductIdU3Ek__BackingField_3() const { return ___U3CunavailableProductIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CunavailableProductIdU3Ek__BackingField_3() { return &___U3CunavailableProductIdU3Ek__BackingField_3; }
	inline void set_U3CunavailableProductIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CunavailableProductIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CunavailableProductIdU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_UIMode_4() { return static_cast<int32_t>(offsetof(FakeStore_t2646191178, ___UIMode_4)); }
	inline int32_t get_UIMode_4() const { return ___UIMode_4; }
	inline int32_t* get_address_of_UIMode_4() { return &___UIMode_4; }
	inline void set_UIMode_4(int32_t value)
	{
		___UIMode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
