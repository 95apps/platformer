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

// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t1956192619;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2986617270;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallba2986617270.h"

// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m1901701227 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m4188065242 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m1246487029 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m732730521 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m621486729 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m4195932239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m1891064720 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m580401072 (OSXStoreBindings_t1956192619 * __this, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m2218607209 (OSXStoreBindings_t1956192619 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m1331457860 (OSXStoreBindings_t1956192619 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m2928971818 (OSXStoreBindings_t1956192619 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m505091532 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m2705226284 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
