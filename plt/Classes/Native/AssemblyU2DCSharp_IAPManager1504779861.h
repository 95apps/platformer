#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2226383159;
// System.String
struct String_t;
// DisplayAmountOfCoins
struct DisplayAmountOfCoins_t1212874609;
// IAPManager
struct IAPManager_t1504779861;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPManager
struct  IAPManager_t1504779861  : public MonoBehaviour_t667441552
{
public:
	// DisplayAmountOfCoins IAPManager::displayCoins
	DisplayAmountOfCoins_t1212874609 * ___displayCoins_8;

public:
	inline static int32_t get_offset_of_displayCoins_8() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861, ___displayCoins_8)); }
	inline DisplayAmountOfCoins_t1212874609 * get_displayCoins_8() const { return ___displayCoins_8; }
	inline DisplayAmountOfCoins_t1212874609 ** get_address_of_displayCoins_8() { return &___displayCoins_8; }
	inline void set_displayCoins_8(DisplayAmountOfCoins_t1212874609 * value)
	{
		___displayCoins_8 = value;
		Il2CppCodeGenWriteBarrier(&___displayCoins_8, value);
	}
};

struct IAPManager_t1504779861_StaticFields
{
public:
	// UnityEngine.Purchasing.IStoreController IAPManager::m_StoreController
	Il2CppObject * ___m_StoreController_2;
	// UnityEngine.Purchasing.IExtensionProvider IAPManager::m_StoreExtensionProvider
	Il2CppObject * ___m_StoreExtensionProvider_3;
	// System.String IAPManager::PRODUCT_1000_GOLD
	String_t* ___PRODUCT_1000_GOLD_4;
	// System.String IAPManager::PRODUCT_2000_GOLD
	String_t* ___PRODUCT_2000_GOLD_5;
	// System.String IAPManager::PRODUCT_4000_GOLD
	String_t* ___PRODUCT_4000_GOLD_6;
	// System.String IAPManager::PRODUCT_8000_GOLD
	String_t* ___PRODUCT_8000_GOLD_7;
	// System.String IAPManager::kProductNameAppleSubscription
	String_t* ___kProductNameAppleSubscription_9;
	// System.String IAPManager::kProductNameGooglePlaySubscription
	String_t* ___kProductNameGooglePlaySubscription_10;
	// IAPManager IAPManager::<Instance>k__BackingField
	IAPManager_t1504779861 * ___U3CInstanceU3Ek__BackingField_11;
	// System.Action`1<System.Boolean> IAPManager::<>f__am$cacheA
	Action_1_t872614854 * ___U3CU3Ef__amU24cacheA_12;

public:
	inline static int32_t get_offset_of_m_StoreController_2() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___m_StoreController_2)); }
	inline Il2CppObject * get_m_StoreController_2() const { return ___m_StoreController_2; }
	inline Il2CppObject ** get_address_of_m_StoreController_2() { return &___m_StoreController_2; }
	inline void set_m_StoreController_2(Il2CppObject * value)
	{
		___m_StoreController_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreController_2, value);
	}

	inline static int32_t get_offset_of_m_StoreExtensionProvider_3() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___m_StoreExtensionProvider_3)); }
	inline Il2CppObject * get_m_StoreExtensionProvider_3() const { return ___m_StoreExtensionProvider_3; }
	inline Il2CppObject ** get_address_of_m_StoreExtensionProvider_3() { return &___m_StoreExtensionProvider_3; }
	inline void set_m_StoreExtensionProvider_3(Il2CppObject * value)
	{
		___m_StoreExtensionProvider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreExtensionProvider_3, value);
	}

	inline static int32_t get_offset_of_PRODUCT_1000_GOLD_4() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___PRODUCT_1000_GOLD_4)); }
	inline String_t* get_PRODUCT_1000_GOLD_4() const { return ___PRODUCT_1000_GOLD_4; }
	inline String_t** get_address_of_PRODUCT_1000_GOLD_4() { return &___PRODUCT_1000_GOLD_4; }
	inline void set_PRODUCT_1000_GOLD_4(String_t* value)
	{
		___PRODUCT_1000_GOLD_4 = value;
		Il2CppCodeGenWriteBarrier(&___PRODUCT_1000_GOLD_4, value);
	}

	inline static int32_t get_offset_of_PRODUCT_2000_GOLD_5() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___PRODUCT_2000_GOLD_5)); }
	inline String_t* get_PRODUCT_2000_GOLD_5() const { return ___PRODUCT_2000_GOLD_5; }
	inline String_t** get_address_of_PRODUCT_2000_GOLD_5() { return &___PRODUCT_2000_GOLD_5; }
	inline void set_PRODUCT_2000_GOLD_5(String_t* value)
	{
		___PRODUCT_2000_GOLD_5 = value;
		Il2CppCodeGenWriteBarrier(&___PRODUCT_2000_GOLD_5, value);
	}

	inline static int32_t get_offset_of_PRODUCT_4000_GOLD_6() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___PRODUCT_4000_GOLD_6)); }
	inline String_t* get_PRODUCT_4000_GOLD_6() const { return ___PRODUCT_4000_GOLD_6; }
	inline String_t** get_address_of_PRODUCT_4000_GOLD_6() { return &___PRODUCT_4000_GOLD_6; }
	inline void set_PRODUCT_4000_GOLD_6(String_t* value)
	{
		___PRODUCT_4000_GOLD_6 = value;
		Il2CppCodeGenWriteBarrier(&___PRODUCT_4000_GOLD_6, value);
	}

	inline static int32_t get_offset_of_PRODUCT_8000_GOLD_7() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___PRODUCT_8000_GOLD_7)); }
	inline String_t* get_PRODUCT_8000_GOLD_7() const { return ___PRODUCT_8000_GOLD_7; }
	inline String_t** get_address_of_PRODUCT_8000_GOLD_7() { return &___PRODUCT_8000_GOLD_7; }
	inline void set_PRODUCT_8000_GOLD_7(String_t* value)
	{
		___PRODUCT_8000_GOLD_7 = value;
		Il2CppCodeGenWriteBarrier(&___PRODUCT_8000_GOLD_7, value);
	}

	inline static int32_t get_offset_of_kProductNameAppleSubscription_9() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___kProductNameAppleSubscription_9)); }
	inline String_t* get_kProductNameAppleSubscription_9() const { return ___kProductNameAppleSubscription_9; }
	inline String_t** get_address_of_kProductNameAppleSubscription_9() { return &___kProductNameAppleSubscription_9; }
	inline void set_kProductNameAppleSubscription_9(String_t* value)
	{
		___kProductNameAppleSubscription_9 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameAppleSubscription_9, value);
	}

	inline static int32_t get_offset_of_kProductNameGooglePlaySubscription_10() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___kProductNameGooglePlaySubscription_10)); }
	inline String_t* get_kProductNameGooglePlaySubscription_10() const { return ___kProductNameGooglePlaySubscription_10; }
	inline String_t** get_address_of_kProductNameGooglePlaySubscription_10() { return &___kProductNameGooglePlaySubscription_10; }
	inline void set_kProductNameGooglePlaySubscription_10(String_t* value)
	{
		___kProductNameGooglePlaySubscription_10 = value;
		Il2CppCodeGenWriteBarrier(&___kProductNameGooglePlaySubscription_10, value);
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___U3CInstanceU3Ek__BackingField_11)); }
	inline IAPManager_t1504779861 * get_U3CInstanceU3Ek__BackingField_11() const { return ___U3CInstanceU3Ek__BackingField_11; }
	inline IAPManager_t1504779861 ** get_address_of_U3CInstanceU3Ek__BackingField_11() { return &___U3CInstanceU3Ek__BackingField_11; }
	inline void set_U3CInstanceU3Ek__BackingField_11(IAPManager_t1504779861 * value)
	{
		___U3CInstanceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(IAPManager_t1504779861_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline Action_1_t872614854 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline Action_1_t872614854 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(Action_1_t872614854 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
