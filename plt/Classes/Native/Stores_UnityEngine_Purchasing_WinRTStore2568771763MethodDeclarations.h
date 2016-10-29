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

// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2568771763;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t1169042288;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.ILogger
struct ILogger_t629411471;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t3725915264;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;
// System.String
struct String_t;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t3536383323;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern "C"  void WinRTStore__ctor_m3557601552 (WinRTStore_t2568771763 * __this, Il2CppObject * ___win80, Il2CppObject * ___util1, Il2CppObject * ___logger2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern "C"  void WinRTStore_SetWindowsIAP_m319186888 (WinRTStore_t2568771763 * __this, Il2CppObject * ___iap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void WinRTStore_Initialize_m3232732420 (WinRTStore_t2568771763 * __this, Il2CppObject * ___biller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void WinRTStore_RetrieveProducts_m211517139 (WinRTStore_t2568771763 * __this, ReadOnlyCollection_1_t3725915264 * ___productDefs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_FinishTransaction_m3883372935 (WinRTStore_t2568771763 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern "C"  void WinRTStore_init_m507203866 (WinRTStore_t2568771763 * __this, int32_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void WinRTStore_Purchase_m505112557 (WinRTStore_t2568771763 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern "C"  void WinRTStore_restoreTransactions_m2626214275 (WinRTStore_t2568771763 * __this, bool ___pausing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__0(UnityEngine.Purchasing.ProductDefinition)
extern "C"  bool WinRTStore_U3CRetrieveProductsU3Em__0_m1512964985 (Il2CppObject * __this /* static, unused */, ProductDefinition_t2168837728 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore::<RetrieveProducts>m__1(UnityEngine.Purchasing.ProductDefinition)
extern "C"  WinProductDescription_t3536383323 * WinRTStore_U3CRetrieveProductsU3Em__1_m2565383860 (Il2CppObject * __this /* static, unused */, ProductDefinition_t2168837728 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
