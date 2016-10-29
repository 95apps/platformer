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
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t3622436081;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1661699449.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.NativeJSONStore
struct  NativeJSONStore_t2563949344  : public AbstractStore_t1661699449
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.NativeJSONStore::unity
	Il2CppObject * ___unity_0;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeJSONStore::store
	Il2CppObject * ___store_1;

public:
	inline static int32_t get_offset_of_unity_0() { return static_cast<int32_t>(offsetof(NativeJSONStore_t2563949344, ___unity_0)); }
	inline Il2CppObject * get_unity_0() const { return ___unity_0; }
	inline Il2CppObject ** get_address_of_unity_0() { return &___unity_0; }
	inline void set_unity_0(Il2CppObject * value)
	{
		___unity_0 = value;
		Il2CppCodeGenWriteBarrier(&___unity_0, value);
	}

	inline static int32_t get_offset_of_store_1() { return static_cast<int32_t>(offsetof(NativeJSONStore_t2563949344, ___store_1)); }
	inline Il2CppObject * get_store_1() const { return ___store_1; }
	inline Il2CppObject ** get_address_of_store_1() { return &___store_1; }
	inline void set_store_1(Il2CppObject * value)
	{
		___store_1 = value;
		Il2CppCodeGenWriteBarrier(&___store_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
