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

// UnityEngine.Purchasing.StoreConfiguration
struct StoreConfiguration_t2506880229;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2837959106.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AndroidStore)
extern "C"  void StoreConfiguration__ctor_m3503019246 (StoreConfiguration_t2506880229 * __this, int32_t ___store0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.AndroidStore UnityEngine.Purchasing.StoreConfiguration::get_androidStore()
extern "C"  int32_t StoreConfiguration_get_androidStore_m1945930462 (StoreConfiguration_t2506880229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AndroidStore)
extern "C"  void StoreConfiguration_set_androidStore_m3369000141 (StoreConfiguration_t2506880229 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StoreConfiguration UnityEngine.Purchasing.StoreConfiguration::Deserialize(System.String)
extern "C"  StoreConfiguration_t2506880229 * StoreConfiguration_Deserialize_m1413112103 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
