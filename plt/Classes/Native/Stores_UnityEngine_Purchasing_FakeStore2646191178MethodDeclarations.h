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

// UnityEngine.Purchasing.FakeStore
struct FakeStore_t2646191178;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t3725915264;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern "C"  void FakeStore__ctor_m2207285772 (FakeStore_t2646191178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern "C"  String_t* FakeStore_get_unavailableProductId_m1427773758 (FakeStore_t2646191178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void FakeStore_Initialize_m246269189 (FakeStore_t2646191178 * __this, Il2CppObject * ___biller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void FakeStore_RetrieveProducts_m2250006612 (FakeStore_t2646191178 * __this, ReadOnlyCollection_1_t3725915264 * ___productDefinitions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_Purchase_m3375370380 (FakeStore_t2646191178 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void FakeStore_FinishTransaction_m1589455816 (FakeStore_t2646191178 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
