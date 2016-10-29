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

// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t603834631;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void StoreInstance__ctor_m755798414 (StoreInstance_t603834631 * __this, String_t* ___name0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_storeName()
extern "C"  String_t* StoreInstance_get_storeName_m159563204 (StoreInstance_t603834631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_instance()
extern "C"  Il2CppObject * StoreInstance_get_instance_m847567983 (StoreInstance_t603834631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
