#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.PurchasingManager
struct PurchasingManager_t2659667725;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t3699792726;
// UnityEngine.ILogger
struct ILogger_t629411471;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;
// System.String
struct String_t;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t1441943467;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t3792620253;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t1212657223;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t3454770911;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t1323266504;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Tran3699792726.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1441943467.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte3792620253.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"

// System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String)
extern "C"  void PurchasingManager__ctor_m390079097 (PurchasingManager_t2659667725 * __this, TransactionLog_t3699792726 * ___tDb0, Il2CppObject * ___logger1, Il2CppObject * ___store2, String_t* ___storeName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.PurchasingManager::get_useTransactionLog()
extern "C"  bool PurchasingManager_get_useTransactionLog_m1196700332 (PurchasingManager_t2659667725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_useTransactionLog(System.Boolean)
extern "C"  void PurchasingManager_set_useTransactionLog_m3015882129 (PurchasingManager_t2659667725 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_InitiatePurchase_m2570378396 (PurchasingManager_t2659667725 * __this, Product_t3127875693 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m3484533720 (PurchasingManager_t2659667725 * __this, Product_t3127875693 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ConfirmPendingPurchase_m1082777978 (PurchasingManager_t2659667725 * __this, Product_t3127875693 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern "C"  ProductCollection_t1441943467 * PurchasingManager_get_products_m2426931548 (PurchasingManager_t2659667725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern "C"  void PurchasingManager_set_products_m3436408421 (PurchasingManager_t2659667725 * __this, ProductCollection_t1441943467 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void PurchasingManager_OnPurchaseSucceeded_m837188719 (PurchasingManager_t2659667725 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void PurchasingManager_OnSetupFailed_m3871050672 (PurchasingManager_t2659667725 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern "C"  void PurchasingManager_OnPurchaseFailed_m3175638850 (PurchasingManager_t2659667725 * __this, PurchaseFailureDescription_t3792620253 * ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void PurchasingManager_OnProductsRetrieved_m1715226664 (PurchasingManager_t2659667725 * __this, List_1_t1212657223 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ProcessPurchaseIfNew_m1020692213 (PurchasingManager_t2659667725 * __this, Product_t3127875693 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern "C"  void PurchasingManager_CheckForInitialization_m49095001 (PurchasingManager_t2659667725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void PurchasingManager_Initialize_m2134113429 (PurchasingManager_t2659667725 * __this, Il2CppObject * ___listener0, HashSet_1_t1323266504 * ___products1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingManager::FormatUnifiedReceipt(System.String,System.String)
extern "C"  String_t* PurchasingManager_FormatUnifiedReceipt_m2085439046 (PurchasingManager_t2659667725 * __this, String_t* ___platformReceipt0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager::<Initialize>m__8(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Product_t3127875693 * PurchasingManager_U3CInitializeU3Em__8_m754883745 (Il2CppObject * __this /* static, unused */, ProductDefinition_t2168837728 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
