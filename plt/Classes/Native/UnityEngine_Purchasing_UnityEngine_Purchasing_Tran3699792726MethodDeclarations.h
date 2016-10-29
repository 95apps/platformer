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

// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t3699792726;
// UnityEngine.ILogger
struct ILogger_t629411471;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.TransactionLog::.ctor(UnityEngine.ILogger,System.String)
extern "C"  void TransactionLog__ctor_m10125831 (TransactionLog_t3699792726 * __this, Il2CppObject * ___logger0, String_t* ___persistentDataPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.TransactionLog::HasRecordOf(System.String)
extern "C"  bool TransactionLog_HasRecordOf_m746240411 (TransactionLog_t3699792726 * __this, String_t* ___transactionID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TransactionLog::Record(System.String)
extern "C"  void TransactionLog_Record_m2367557522 (TransactionLog_t3699792726 * __this, String_t* ___transactionID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.TransactionLog::GetRecordPath(System.String)
extern "C"  String_t* TransactionLog_GetRecordPath_m3556192432 (TransactionLog_t3699792726 * __this, String_t* ___transactionID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.TransactionLog::ComputeHash(System.String)
extern "C"  String_t* TransactionLog_ComputeHash_m340275319 (Il2CppObject * __this /* static, unused */, String_t* ___transactionID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
