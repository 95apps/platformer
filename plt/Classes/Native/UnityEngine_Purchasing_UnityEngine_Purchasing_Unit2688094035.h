#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.PurchasingManager
struct PurchasingManager_t2659667725;
// UnityEngine.Purchasing.StoreListenerProxy
struct StoreListenerProxy_t1159423497;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey3
struct  U3CInitializeU3Ec__AnonStorey3_t2688094035  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.PurchasingManager UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey3::manager
	PurchasingManager_t2659667725 * ___manager_0;
	// UnityEngine.Purchasing.StoreListenerProxy UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey3::proxy
	StoreListenerProxy_t1159423497 * ___proxy_1;

public:
	inline static int32_t get_offset_of_manager_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey3_t2688094035, ___manager_0)); }
	inline PurchasingManager_t2659667725 * get_manager_0() const { return ___manager_0; }
	inline PurchasingManager_t2659667725 ** get_address_of_manager_0() { return &___manager_0; }
	inline void set_manager_0(PurchasingManager_t2659667725 * value)
	{
		___manager_0 = value;
		Il2CppCodeGenWriteBarrier(&___manager_0, value);
	}

	inline static int32_t get_offset_of_proxy_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey3_t2688094035, ___proxy_1)); }
	inline StoreListenerProxy_t1159423497 * get_proxy_1() const { return ___proxy_1; }
	inline StoreListenerProxy_t1159423497 ** get_address_of_proxy_1() { return &___proxy_1; }
	inline void set_proxy_1(StoreListenerProxy_t1159423497 * value)
	{
		___proxy_1 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
