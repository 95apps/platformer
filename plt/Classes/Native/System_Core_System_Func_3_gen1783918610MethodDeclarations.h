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

// System.Func`3<System.Object,System.Int32,System.Object>
struct Func_3_t1783918610;
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

// System.Void System.Func`3<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m2605817040_gshared (Func_3_t1783918610 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_3__ctor_m2605817040(__this, ___object0, ___method1, method) ((  void (*) (Func_3_t1783918610 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_3__ctor_m2605817040_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`3<System.Object,System.Int32,System.Object>::Invoke(T1,T2)
extern "C"  Il2CppObject * Func_3_Invoke_m2458764669_gshared (Func_3_t1783918610 * __this, Il2CppObject * ___arg10, int32_t ___arg21, const MethodInfo* method);
#define Func_3_Invoke_m2458764669(__this, ___arg10, ___arg21, method) ((  Il2CppObject * (*) (Func_3_t1783918610 *, Il2CppObject *, int32_t, const MethodInfo*))Func_3_Invoke_m2458764669_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Func`3<System.Object,System.Int32,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_3_BeginInvoke_m171032578_gshared (Func_3_t1783918610 * __this, Il2CppObject * ___arg10, int32_t ___arg21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Func_3_BeginInvoke_m171032578(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Func_3_t1783918610 *, Il2CppObject *, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_3_BeginInvoke_m171032578_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// TResult System.Func`3<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_3_EndInvoke_m2951600894_gshared (Func_3_t1783918610 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_3_EndInvoke_m2951600894(__this, ___result0, method) ((  Il2CppObject * (*) (Func_3_t1783918610 *, Il2CppObject *, const MethodInfo*))Func_3_EndInvoke_m2951600894_gshared)(__this, ___result0, method)
