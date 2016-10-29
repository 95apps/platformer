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

// UnityEngine.Purchasing.TizenStoreImpl
struct TizenStoreImpl_t155182595;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t1360023089;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.TizenStoreImpl::.ctor(Uniject.IUtil)
extern "C"  void TizenStoreImpl__ctor_m1178219326 (TizenStoreImpl_t155182595 * __this, Il2CppObject * ___util0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeTizenStore)
extern "C"  void TizenStoreImpl_SetNativeStore_m2802700439 (TizenStoreImpl_t155182595 * __this, Il2CppObject * ___tizen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetGroupId(System.String)
extern "C"  void TizenStoreImpl_SetGroupId_m54443969 (TizenStoreImpl_t155182595 * __this, String_t* ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TizenStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_MessageCallback_m3765147857 (Il2CppObject * __this /* static, unused */, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_m3765147857(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
// System.Void UnityEngine.Purchasing.TizenStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern "C"  void TizenStoreImpl_ProcessMessage_m2847474389 (TizenStoreImpl_t155182595 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
