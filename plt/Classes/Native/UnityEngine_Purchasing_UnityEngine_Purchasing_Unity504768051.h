#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t1323266504;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t1719082640;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey4
struct  U3CFetchAndMergeProductsU3Ec__AnonStorey4_t504768051  : public Il2CppObject
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey4::applicationProducts
	HashSet_1_t1323266504 * ___applicationProducts_0;
	// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>> UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey4::callback
	Action_1_t1719082640 * ___callback_1;

public:
	inline static int32_t get_offset_of_applicationProducts_0() { return static_cast<int32_t>(offsetof(U3CFetchAndMergeProductsU3Ec__AnonStorey4_t504768051, ___applicationProducts_0)); }
	inline HashSet_1_t1323266504 * get_applicationProducts_0() const { return ___applicationProducts_0; }
	inline HashSet_1_t1323266504 ** get_address_of_applicationProducts_0() { return &___applicationProducts_0; }
	inline void set_applicationProducts_0(HashSet_1_t1323266504 * value)
	{
		___applicationProducts_0 = value;
		Il2CppCodeGenWriteBarrier(&___applicationProducts_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CFetchAndMergeProductsU3Ec__AnonStorey4_t504768051, ___callback_1)); }
	inline Action_1_t1719082640 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t1719082640 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t1719082640 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
