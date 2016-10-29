#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t3454770911;
// UnityEngine.ILogger
struct ILogger_t629411471;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t3699792726;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;
// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>
struct Action_1_t4271086196;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t1441943467;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>
struct Func_2_t753441010;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchasingManager
struct  PurchasingManager_t2659667725  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingManager::m_Store
	Il2CppObject * ___m_Store_0;
	// UnityEngine.Purchasing.IInternalStoreListener UnityEngine.Purchasing.PurchasingManager::m_Listener
	Il2CppObject * ___m_Listener_1;
	// UnityEngine.ILogger UnityEngine.Purchasing.PurchasingManager::m_Logger
	Il2CppObject * ___m_Logger_2;
	// UnityEngine.Purchasing.TransactionLog UnityEngine.Purchasing.PurchasingManager::m_TransactionLog
	TransactionLog_t3699792726 * ___m_TransactionLog_3;
	// System.String UnityEngine.Purchasing.PurchasingManager::m_StoreName
	String_t* ___m_StoreName_4;
	// System.Action UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsCallback
	Action_t3771233898 * ___m_AdditionalProductsCallback_5;
	// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason> UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsFailCallback
	Action_1_t4271086196 * ___m_AdditionalProductsFailCallback_6;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::initialized
	bool ___initialized_7;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::<useTransactionLog>k__BackingField
	bool ___U3CuseTransactionLogU3Ek__BackingField_8;
	// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::<products>k__BackingField
	ProductCollection_t1441943467 * ___U3CproductsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_Store_0)); }
	inline Il2CppObject * get_m_Store_0() const { return ___m_Store_0; }
	inline Il2CppObject ** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(Il2CppObject * value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Store_0, value);
	}

	inline static int32_t get_offset_of_m_Listener_1() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_Listener_1)); }
	inline Il2CppObject * get_m_Listener_1() const { return ___m_Listener_1; }
	inline Il2CppObject ** get_address_of_m_Listener_1() { return &___m_Listener_1; }
	inline void set_m_Listener_1(Il2CppObject * value)
	{
		___m_Listener_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Listener_1, value);
	}

	inline static int32_t get_offset_of_m_Logger_2() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_Logger_2)); }
	inline Il2CppObject * get_m_Logger_2() const { return ___m_Logger_2; }
	inline Il2CppObject ** get_address_of_m_Logger_2() { return &___m_Logger_2; }
	inline void set_m_Logger_2(Il2CppObject * value)
	{
		___m_Logger_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_2, value);
	}

	inline static int32_t get_offset_of_m_TransactionLog_3() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_TransactionLog_3)); }
	inline TransactionLog_t3699792726 * get_m_TransactionLog_3() const { return ___m_TransactionLog_3; }
	inline TransactionLog_t3699792726 ** get_address_of_m_TransactionLog_3() { return &___m_TransactionLog_3; }
	inline void set_m_TransactionLog_3(TransactionLog_t3699792726 * value)
	{
		___m_TransactionLog_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransactionLog_3, value);
	}

	inline static int32_t get_offset_of_m_StoreName_4() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_StoreName_4)); }
	inline String_t* get_m_StoreName_4() const { return ___m_StoreName_4; }
	inline String_t** get_address_of_m_StoreName_4() { return &___m_StoreName_4; }
	inline void set_m_StoreName_4(String_t* value)
	{
		___m_StoreName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreName_4, value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsCallback_5() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_AdditionalProductsCallback_5)); }
	inline Action_t3771233898 * get_m_AdditionalProductsCallback_5() const { return ___m_AdditionalProductsCallback_5; }
	inline Action_t3771233898 ** get_address_of_m_AdditionalProductsCallback_5() { return &___m_AdditionalProductsCallback_5; }
	inline void set_m_AdditionalProductsCallback_5(Action_t3771233898 * value)
	{
		___m_AdditionalProductsCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AdditionalProductsCallback_5, value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsFailCallback_6() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___m_AdditionalProductsFailCallback_6)); }
	inline Action_1_t4271086196 * get_m_AdditionalProductsFailCallback_6() const { return ___m_AdditionalProductsFailCallback_6; }
	inline Action_1_t4271086196 ** get_address_of_m_AdditionalProductsFailCallback_6() { return &___m_AdditionalProductsFailCallback_6; }
	inline void set_m_AdditionalProductsFailCallback_6(Action_1_t4271086196 * value)
	{
		___m_AdditionalProductsFailCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_AdditionalProductsFailCallback_6, value);
	}

	inline static int32_t get_offset_of_initialized_7() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___initialized_7)); }
	inline bool get_initialized_7() const { return ___initialized_7; }
	inline bool* get_address_of_initialized_7() { return &___initialized_7; }
	inline void set_initialized_7(bool value)
	{
		___initialized_7 = value;
	}

	inline static int32_t get_offset_of_U3CuseTransactionLogU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___U3CuseTransactionLogU3Ek__BackingField_8)); }
	inline bool get_U3CuseTransactionLogU3Ek__BackingField_8() const { return ___U3CuseTransactionLogU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CuseTransactionLogU3Ek__BackingField_8() { return &___U3CuseTransactionLogU3Ek__BackingField_8; }
	inline void set_U3CuseTransactionLogU3Ek__BackingField_8(bool value)
	{
		___U3CuseTransactionLogU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725, ___U3CproductsU3Ek__BackingField_9)); }
	inline ProductCollection_t1441943467 * get_U3CproductsU3Ek__BackingField_9() const { return ___U3CproductsU3Ek__BackingField_9; }
	inline ProductCollection_t1441943467 ** get_address_of_U3CproductsU3Ek__BackingField_9() { return &___U3CproductsU3Ek__BackingField_9; }
	inline void set_U3CproductsU3Ek__BackingField_9(ProductCollection_t1441943467 * value)
	{
		___U3CproductsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CproductsU3Ek__BackingField_9, value);
	}
};

struct PurchasingManager_t2659667725_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.PurchasingManager::<>f__am$cacheB
	Func_2_t753441010 * ___U3CU3Ef__amU24cacheB_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_10() { return static_cast<int32_t>(offsetof(PurchasingManager_t2659667725_StaticFields, ___U3CU3Ef__amU24cacheB_10)); }
	inline Func_2_t753441010 * get_U3CU3Ef__amU24cacheB_10() const { return ___U3CU3Ef__amU24cacheB_10; }
	inline Func_2_t753441010 ** get_address_of_U3CU3Ef__amU24cacheB_10() { return &___U3CU3Ef__amU24cacheB_10; }
	inline void set_U3CU3Ef__amU24cacheB_10(Func_2_t753441010 * value)
	{
		___U3CU3Ef__amU24cacheB_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
