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

// System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>
struct Action_2_t2050197297;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m2512218974_gshared (Action_2_t2050197297 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m2512218974(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t2050197297 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m2512218974_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m167089997_gshared (Action_2_t2050197297 * __this, bool ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m167089997(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t2050197297 *, bool, int32_t, const MethodInfo*))Action_2_Invoke_m167089997_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2185912408_gshared (Action_2_t2050197297 * __this, bool ___arg10, int32_t ___arg21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m2185912408(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t2050197297 *, bool, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2185912408_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Boolean,UnityEngine.Purchasing.InitializationFailureReason>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1067414722_gshared (Action_2_t2050197297 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m1067414722(__this, ___result0, method) ((  void (*) (Action_2_t2050197297 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1067414722_gshared)(__this, ___result0, method)
