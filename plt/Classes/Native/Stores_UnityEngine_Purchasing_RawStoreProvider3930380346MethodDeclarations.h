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

// UnityEngine.Purchasing.RawStoreProvider
struct RawStoreProvider_t3930380346;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t3622436081;
// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t2501628097;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t45080299;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t2443194981;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t1360023089;

#include "codegen/il2cpp-codegen.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2837959106.h"

// System.Void UnityEngine.Purchasing.RawStoreProvider::.ctor()
extern "C"  void RawStoreProvider__ctor_m4187291876 (RawStoreProvider_t3930380346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.RawStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AndroidStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern "C"  Il2CppObject * RawStoreProvider_GetAndroidStore_m189122474 (RawStoreProvider_t3930380346 * __this, Il2CppObject * ___callback0, int32_t ___store1, Il2CppObject * ___binder2, Il2CppObject * ___util3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.RawStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern "C"  Il2CppObject * RawStoreProvider_GetStorekit_m2399623300 (RawStoreProvider_t3930380346 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeTizenStore UnityEngine.Purchasing.RawStoreProvider::GetTizenStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  Il2CppObject * RawStoreProvider_GetTizenStore_m2016656011 (RawStoreProvider_t3930380346 * __this, Il2CppObject * ___callback0, Il2CppObject * ___binder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
