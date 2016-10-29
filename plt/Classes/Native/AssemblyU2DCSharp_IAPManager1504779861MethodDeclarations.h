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

// IAPManager
struct IAPManager_t1504779861;
// System.String
struct String_t;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2226383159;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t816323924;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IAPManager1504779861.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch353703105.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch816323924.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"

// System.Void IAPManager::.ctor()
extern "C"  void IAPManager__ctor_m1356777958 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::.cctor()
extern "C"  void IAPManager__cctor_m2923314823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::set_Instance(IAPManager)
extern "C"  void IAPManager_set_Instance_m3183737979 (Il2CppObject * __this /* static, unused */, IAPManager_t1504779861 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IAPManager IAPManager::get_Instance()
extern "C"  IAPManager_t1504779861 * IAPManager_get_Instance_m2482883396 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Awake()
extern "C"  void IAPManager_Awake_m1594383177 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Start()
extern "C"  void IAPManager_Start_m303915750 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::InitializePurchasing()
extern "C"  void IAPManager_InitializePurchasing_m1561655884 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IAPManager::IsInitialized()
extern "C"  bool IAPManager_IsInitialized_m464950682 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Buy1000Gold()
extern "C"  void IAPManager_Buy1000Gold_m3763126633 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Buy2000Gold()
extern "C"  void IAPManager_Buy2000Gold_m3566613128 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Buy4000Gold()
extern "C"  void IAPManager_Buy4000Gold_m3173586118 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::Buy8000Gold()
extern "C"  void IAPManager_Buy8000Gold_m2387532098 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::BuyProductID(System.String)
extern "C"  void IAPManager_BuyProductID_m4078340928 (IAPManager_t1504779861 * __this, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::RestorePurchases()
extern "C"  void IAPManager_RestorePurchases_m1165286082 (IAPManager_t1504779861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPManager_OnInitialized_m2062112216 (IAPManager_t1504779861 * __this, Il2CppObject * ___controller0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPManager_OnInitializeFailed_m26492437 (IAPManager_t1504779861 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult IAPManager::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPManager_ProcessPurchase_m572571182 (IAPManager_t1504779861 * __this, PurchaseEventArgs_t816323924 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPManager_OnPurchaseFailed_m1581309037 (IAPManager_t1504779861 * __this, Product_t3127875693 * ___product0, int32_t ___failureReason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPManager::<RestorePurchases>m__0(System.Boolean)
extern "C"  void IAPManager_U3CRestorePurchasesU3Em__0_m2348008758 (Il2CppObject * __this /* static, unused */, bool ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
