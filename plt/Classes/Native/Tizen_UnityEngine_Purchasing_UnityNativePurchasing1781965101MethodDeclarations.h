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

// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t1781965101;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityNativePurchasingCallback__ctor_m2873225053 (UnityNativePurchasingCallback_t1781965101 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityNativePurchasingCallback_Invoke_m3687803487 (UnityNativePurchasingCallback_t1781965101 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Purchasing.UnityNativePurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityNativePurchasingCallback_BeginInvoke_m493263420 (UnityNativePurchasingCallback_t1781965101 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityNativePurchasingCallback_EndInvoke_m654677997 (UnityNativePurchasingCallback_t1781965101 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
