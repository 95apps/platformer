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

// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t4218780373;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t732524650;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t1323266504;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t365260717;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t2340684544;
// System.String
struct String_t;
// UnityEngine.Purchasing.IDs
struct IDs_t3860457942;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch732524650.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ938787015.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_IDs3860457942.h"

// System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern "C"  void ConfigurationBuilder__ctor_m3208934899 (ConfigurationBuilder_t4218780373 * __this, PurchasingFactory_t732524650 * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::get_useCloudCatalog()
extern "C"  bool ConfigurationBuilder_get_useCloudCatalog_m2944113128 (ConfigurationBuilder_t4218780373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t1323266504 * ConfigurationBuilder_get_products_m3467362703 (ConfigurationBuilder_t4218780373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern "C"  PurchasingFactory_t732524650 * ConfigurationBuilder_get_factory_m762852413 (ConfigurationBuilder_t4218780373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  ConfigurationBuilder_t4218780373 * ConfigurationBuilder_Instance_m2276604038 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___first0, IPurchasingModuleU5BU5D_t2340684544* ___rest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  ConfigurationBuilder_t4218780373 * ConfigurationBuilder_AddProduct_m1375043915 (ConfigurationBuilder_t4218780373 * __this, String_t* ___id0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t4218780373 * ConfigurationBuilder_AddProduct_m1483534012 (ConfigurationBuilder_t4218780373 * __this, String_t* ___id0, int32_t ___type1, IDs_t3860457942 * ___storeIDs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
