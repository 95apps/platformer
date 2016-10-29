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

// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t1076947612;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t4218780373;
// UnityEngine.ILogger
struct ILogger_t629411471;
// System.String
struct String_t;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t1104563416;
// UnityEngine.Purchasing.CloudCatalogManager
struct CloudCatalogManager_t595164135;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t1323266504;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t1719082640;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Conf4218780373.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Cloud595164135.h"

// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C"  void UnityPurchasing_Initialize_m1759774959 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener0, ConfigurationBuilder_t4218780373 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IUnityAnalytics,UnityEngine.Purchasing.CloudCatalogManager)
extern "C"  void UnityPurchasing_Initialize_m941295238 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener0, ConfigurationBuilder_t4218780373 * ___builder1, Il2CppObject * ___logger2, String_t* ___persistentDatapath3, Il2CppObject * ___analytics4, CloudCatalogManager_t595164135 * ___catalog5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::FetchAndMergeProducts(System.Boolean,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,UnityEngine.Purchasing.CloudCatalogManager,System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern "C"  void UnityPurchasing_FetchAndMergeProducts_m4064782446 (Il2CppObject * __this /* static, unused */, bool ___useCatalog0, HashSet_1_t1323266504 * ___applicationProducts1, CloudCatalogManager_t595164135 * ___catalog2, Action_1_t1719082640 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.CloudCatalogManager UnityEngine.Purchasing.UnityPurchasing::InstantiateCatalog(System.String)
extern "C"  CloudCatalogManager_t595164135 * UnityPurchasing_InstantiateCatalog_m3684593436 (Il2CppObject * __this /* static, unused */, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
