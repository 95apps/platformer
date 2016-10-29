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

// UnityEngine.Purchasing.StoreListenerProxy
struct StoreListenerProxy_t1159423497;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t1076947612;
// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t2954565;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2226383159;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t816323924;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Analyti2954565.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch353703105.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch816323924.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"

// System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.AnalyticsReporter,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void StoreListenerProxy__ctor_m3543322089 (StoreListenerProxy_t1159423497 * __this, Il2CppObject * ___forwardTo0, AnalyticsReporter_t2954565 * ___analytics1, Il2CppObject * ___extensions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitialized(UnityEngine.Purchasing.IStoreController)
extern "C"  void StoreListenerProxy_OnInitialized_m2234879360 (StoreListenerProxy_t1159423497 * __this, Il2CppObject * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void StoreListenerProxy_OnInitializeFailed_m3767109769 (StoreListenerProxy_t1159423497 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.StoreListenerProxy::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t StoreListenerProxy_ProcessPurchase_m999184108 (StoreListenerProxy_t1159423497 * __this, PurchaseEventArgs_t816323924 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void StoreListenerProxy_OnPurchaseFailed_m531435385 (StoreListenerProxy_t1159423497 * __this, Product_t3127875693 * ___i0, int32_t ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
