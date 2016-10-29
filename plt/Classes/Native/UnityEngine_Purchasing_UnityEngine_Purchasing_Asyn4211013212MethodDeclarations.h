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

// UnityEngine.Purchasing.AsyncUtil
struct AsyncUtil_t4211013212;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action
struct Action_t3771233898;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.WWW
struct WWW_t3134621005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Core_System_Action3771233898.h"
#include "UnityEngine_UnityEngine_WWW3134621005.h"

// System.Void UnityEngine.Purchasing.AsyncUtil::.ctor()
extern "C"  void AsyncUtil__ctor_m2933846173 (AsyncUtil_t4211013212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AsyncUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  void AsyncUtil_Get_m2309859473 (AsyncUtil_t4211013212 * __this, String_t* ___url0, Action_1_t403047693 * ___responseHandler1, Action_1_t403047693 * ___errorHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AsyncUtil::Schedule(System.Action,System.Int32)
extern "C"  void AsyncUtil_Schedule_m100400088 (AsyncUtil_t4211013212 * __this, Action_t3771233898 * ___a0, int32_t ___delayInSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.AsyncUtil::DoInvoke(System.Action,System.Int32)
extern "C"  Il2CppObject * AsyncUtil_DoInvoke_m1340129626 (AsyncUtil_t4211013212 * __this, Action_t3771233898 * ___a0, int32_t ___delayInSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.AsyncUtil::Process(UnityEngine.WWW,System.Action`1<System.String>,System.Action`1<System.String>)
extern "C"  Il2CppObject * AsyncUtil_Process_m2299573438 (AsyncUtil_t4211013212 * __this, WWW_t3134621005 * ___request0, Action_1_t403047693 * ___responseHandler1, Action_1_t403047693 * ___errorHandler2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
