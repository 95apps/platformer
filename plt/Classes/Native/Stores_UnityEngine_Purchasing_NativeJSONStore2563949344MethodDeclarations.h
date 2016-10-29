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

// UnityEngine.Purchasing.NativeJSONStore
struct NativeJSONStore_t2563949344;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t3622436081;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t3725915264;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.NativeJSONStore::.ctor()
extern "C"  void NativeJSONStore__ctor_m1639507702 (NativeJSONStore_t2563949344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern "C"  void NativeJSONStore_SetNativeStore_m3397986178 (NativeJSONStore_t2563949344 * __this, Il2CppObject * ___native0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void NativeJSONStore_Initialize_m2916247791 (NativeJSONStore_t2563949344 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void NativeJSONStore_RetrieveProducts_m300663614 (NativeJSONStore_t2563949344 * __this, ReadOnlyCollection_1_t3725915264 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_Purchase_m3049737954 (NativeJSONStore_t2563949344 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void NativeJSONStore_FinishTransaction_m2249698866 (NativeJSONStore_t2563949344 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnSetupFailed(System.String)
extern "C"  void NativeJSONStore_OnSetupFailed_m4190222163 (NativeJSONStore_t2563949344 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnProductsRetrieved(System.String)
extern "C"  void NativeJSONStore_OnProductsRetrieved_m3156753289 (NativeJSONStore_t2563949344 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void NativeJSONStore_OnPurchaseSucceeded_m2483598917 (NativeJSONStore_t2563949344 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.NativeJSONStore::OnPurchaseFailed(System.String)
extern "C"  void NativeJSONStore_OnPurchaseFailed_m147092407 (NativeJSONStore_t2563949344 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
