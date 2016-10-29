#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>
struct Dictionary_2_t1469651469;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension>
struct Dictionary_2_t1249879098;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchasingFactory
struct  PurchasingFactory_t732524650  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration> UnityEngine.Purchasing.PurchasingFactory::m_ConfigMap
	Dictionary_2_t1469651469 * ___m_ConfigMap_0;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension> UnityEngine.Purchasing.PurchasingFactory::m_ExtensionMap
	Dictionary_2_t1249879098 * ___m_ExtensionMap_1;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::m_Store
	Il2CppObject * ___m_Store_2;
	// System.String UnityEngine.Purchasing.PurchasingFactory::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_ConfigMap_0() { return static_cast<int32_t>(offsetof(PurchasingFactory_t732524650, ___m_ConfigMap_0)); }
	inline Dictionary_2_t1469651469 * get_m_ConfigMap_0() const { return ___m_ConfigMap_0; }
	inline Dictionary_2_t1469651469 ** get_address_of_m_ConfigMap_0() { return &___m_ConfigMap_0; }
	inline void set_m_ConfigMap_0(Dictionary_2_t1469651469 * value)
	{
		___m_ConfigMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ConfigMap_0, value);
	}

	inline static int32_t get_offset_of_m_ExtensionMap_1() { return static_cast<int32_t>(offsetof(PurchasingFactory_t732524650, ___m_ExtensionMap_1)); }
	inline Dictionary_2_t1249879098 * get_m_ExtensionMap_1() const { return ___m_ExtensionMap_1; }
	inline Dictionary_2_t1249879098 ** get_address_of_m_ExtensionMap_1() { return &___m_ExtensionMap_1; }
	inline void set_m_ExtensionMap_1(Dictionary_2_t1249879098 * value)
	{
		___m_ExtensionMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExtensionMap_1, value);
	}

	inline static int32_t get_offset_of_m_Store_2() { return static_cast<int32_t>(offsetof(PurchasingFactory_t732524650, ___m_Store_2)); }
	inline Il2CppObject * get_m_Store_2() const { return ___m_Store_2; }
	inline Il2CppObject ** get_address_of_m_Store_2() { return &___m_Store_2; }
	inline void set_m_Store_2(Il2CppObject * value)
	{
		___m_Store_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Store_2, value);
	}

	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PurchasingFactory_t732524650, ___U3CstoreNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_3() const { return ___U3CstoreNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_3() { return &___U3CstoreNameU3Ek__BackingField_3; }
	inline void set_U3CstoreNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstoreNameU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
