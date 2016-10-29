#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.TizenStoreImpl
struct TizenStoreImpl_t155182595;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t1360023089;
// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t1781965101;

#include "Stores_UnityEngine_Purchasing_NativeJSONStore2563949344.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.TizenStoreImpl
struct  TizenStoreImpl_t155182595  : public NativeJSONStore_t2563949344
{
public:
	// UnityEngine.Purchasing.INativeTizenStore UnityEngine.Purchasing.TizenStoreImpl::m_Native
	Il2CppObject * ___m_Native_3;

public:
	inline static int32_t get_offset_of_m_Native_3() { return static_cast<int32_t>(offsetof(TizenStoreImpl_t155182595, ___m_Native_3)); }
	inline Il2CppObject * get_m_Native_3() const { return ___m_Native_3; }
	inline Il2CppObject ** get_address_of_m_Native_3() { return &___m_Native_3; }
	inline void set_m_Native_3(Il2CppObject * value)
	{
		___m_Native_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Native_3, value);
	}
};

struct TizenStoreImpl_t155182595_StaticFields
{
public:
	// UnityEngine.Purchasing.TizenStoreImpl UnityEngine.Purchasing.TizenStoreImpl::instance
	TizenStoreImpl_t155182595 * ___instance_2;
	// UnityEngine.Purchasing.UnityNativePurchasingCallback UnityEngine.Purchasing.TizenStoreImpl::<>f__mg$cache0
	UnityNativePurchasingCallback_t1781965101 * ___U3CU3Ef__mgU24cache0_4;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(TizenStoreImpl_t155182595_StaticFields, ___instance_2)); }
	inline TizenStoreImpl_t155182595 * get_instance_2() const { return ___instance_2; }
	inline TizenStoreImpl_t155182595 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(TizenStoreImpl_t155182595 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(TizenStoreImpl_t155182595_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline UnityNativePurchasingCallback_t1781965101 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline UnityNativePurchasingCallback_t1781965101 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(UnityNativePurchasingCallback_t1781965101 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
