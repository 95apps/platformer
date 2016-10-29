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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t92490124;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAdsDelegate_2__ctor_m3333732870_gshared (UnityAdsDelegate_2_t92490124 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m3333732870(__this, ___object0, ___method1, method) ((  void (*) (UnityAdsDelegate_2_t92490124 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m3333732870_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C"  void UnityAdsDelegate_2_Invoke_m3219353189_gshared (UnityAdsDelegate_2_t92490124 * __this, Il2CppObject * ___p10, bool ___p21, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m3219353189(__this, ___p10, ___p21, method) ((  void (*) (UnityAdsDelegate_2_t92490124 *, Il2CppObject *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m3219353189_gshared)(__this, ___p10, ___p21, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAdsDelegate_2_BeginInvoke_m904198668_gshared (UnityAdsDelegate_2_t92490124 * __this, Il2CppObject * ___p10, bool ___p21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m904198668(__this, ___p10, ___p21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAdsDelegate_2_t92490124 *, Il2CppObject *, bool, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m904198668_gshared)(__this, ___p10, ___p21, ___callback2, ___object3, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAdsDelegate_2_EndInvoke_m399646486_gshared (UnityAdsDelegate_2_t92490124 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m399646486(__this, ___result0, method) ((  void (*) (UnityAdsDelegate_2_t92490124 *, Il2CppObject *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m399646486_gshared)(__this, ___result0, method)
