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

// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t732524650;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t365260717;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t2340684544;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.PurchasingFactory::.ctor(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  void PurchasingFactory__ctor_m1796383829 (PurchasingFactory_t732524650 * __this, Il2CppObject * ___first0, IPurchasingModuleU5BU5D_t2340684544* ___remainingModules1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingFactory::get_storeName()
extern "C"  String_t* PurchasingFactory_get_storeName_m687870637 (PurchasingFactory_t732524650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_storeName(System.String)
extern "C"  void PurchasingFactory_set_storeName_m1467552838 (PurchasingFactory_t732524650 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::get_service()
extern "C"  Il2CppObject * PurchasingFactory_get_service_m185503238 (PurchasingFactory_t732524650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_service(UnityEngine.Purchasing.Extension.IStore)
extern "C"  void PurchasingFactory_set_service_m2506837453 (PurchasingFactory_t732524650 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingFactory::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void PurchasingFactory_RegisterStore_m147683459 (PurchasingFactory_t732524650 * __this, String_t* ___name0, Il2CppObject * ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
