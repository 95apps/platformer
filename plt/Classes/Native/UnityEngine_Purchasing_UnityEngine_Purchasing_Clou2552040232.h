#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t1719082640;
// UnityEngine.Purchasing.CloudCatalogManager
struct CloudCatalogManager_t595164135;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.CloudCatalogManager/<FetchProducts>c__AnonStorey2
struct  U3CFetchProductsU3Ec__AnonStorey2_t2552040232  : public Il2CppObject
{
public:
	// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>> UnityEngine.Purchasing.CloudCatalogManager/<FetchProducts>c__AnonStorey2::callback
	Action_1_t1719082640 * ___callback_0;
	// System.Int32 UnityEngine.Purchasing.CloudCatalogManager/<FetchProducts>c__AnonStorey2::delayInSeconds
	int32_t ___delayInSeconds_1;
	// UnityEngine.Purchasing.CloudCatalogManager UnityEngine.Purchasing.CloudCatalogManager/<FetchProducts>c__AnonStorey2::<>f__this
	CloudCatalogManager_t595164135 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchProductsU3Ec__AnonStorey2_t2552040232, ___callback_0)); }
	inline Action_1_t1719082640 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t1719082640 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t1719082640 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_delayInSeconds_1() { return static_cast<int32_t>(offsetof(U3CFetchProductsU3Ec__AnonStorey2_t2552040232, ___delayInSeconds_1)); }
	inline int32_t get_delayInSeconds_1() const { return ___delayInSeconds_1; }
	inline int32_t* get_address_of_delayInSeconds_1() { return &___delayInSeconds_1; }
	inline void set_delayInSeconds_1(int32_t value)
	{
		___delayInSeconds_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CFetchProductsU3Ec__AnonStorey2_t2552040232, ___U3CU3Ef__this_2)); }
	inline CloudCatalogManager_t595164135 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline CloudCatalogManager_t595164135 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(CloudCatalogManager_t595164135 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
