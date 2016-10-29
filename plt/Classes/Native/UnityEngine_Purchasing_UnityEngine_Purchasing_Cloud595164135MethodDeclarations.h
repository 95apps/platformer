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

// UnityEngine.Purchasing.CloudCatalogManager
struct CloudCatalogManager_t595164135;
// UnityEngine.Purchasing.IAsyncUtil
struct IAsyncUtil_t1443965573;
// System.String
struct String_t;
// UnityEngine.ILogger
struct ILogger_t629411471;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t1719082640;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t1323266504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.CloudCatalogManager::.ctor(UnityEngine.Purchasing.IAsyncUtil,System.String,UnityEngine.ILogger,System.String,System.String)
extern "C"  void CloudCatalogManager__ctor_m236504688 (CloudCatalogManager_t595164135 * __this, Il2CppObject * ___util0, String_t* ___cacheFile1, Il2CppObject * ___logger2, String_t* ___catalogURL3, String_t* ___storeName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CloudCatalogManager::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>,System.Int32)
extern "C"  void CloudCatalogManager_FetchProducts_m3885609932 (CloudCatalogManager_t595164135 * __this, Action_1_t1719082640 * ___callback0, int32_t ___delayInSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogManager::ParseProductsFromJSON(System.String,System.String)
extern "C"  HashSet_1_t1323266504 * CloudCatalogManager_ParseProductsFromJSON_m3679428225 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___storeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.CloudCatalogManager::CamelCaseToSnakeCase(System.String)
extern "C"  String_t* CloudCatalogManager_CamelCaseToSnakeCase_m315773534 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CloudCatalogManager::TryPersistCatalog(System.String)
extern "C"  void CloudCatalogManager_TryPersistCatalog_m903637874 (CloudCatalogManager_t595164135 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogManager::TryLoadCachedCatalog()
extern "C"  HashSet_1_t1323266504 * CloudCatalogManager_TryLoadCachedCatalog_m699642756 (CloudCatalogManager_t595164135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.CloudCatalogManager::<CamelCaseToSnakeCase>m__2(System.Char,System.Int32)
extern "C"  String_t* CloudCatalogManager_U3CCamelCaseToSnakeCaseU3Em__2_m1447734151 (Il2CppObject * __this /* static, unused */, Il2CppChar ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.CloudCatalogManager::<CamelCaseToSnakeCase>m__3(System.String,System.String)
extern "C"  String_t* CloudCatalogManager_U3CCamelCaseToSnakeCaseU3Em__3_m2372769232 (Il2CppObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
