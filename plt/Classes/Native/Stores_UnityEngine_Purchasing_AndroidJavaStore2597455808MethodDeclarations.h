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

// UnityEngine.Purchasing.AndroidJavaStore
struct AndroidJavaStore_t2597455808;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t2362096582;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AndroidJavaObject2362096582.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern "C"  void AndroidJavaStore__ctor_m1510297595 (AndroidJavaStore_t2597455808 * __this, AndroidJavaObject_t2362096582 * ___store0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern "C"  void AndroidJavaStore_RetrieveProducts_m159013148 (AndroidJavaStore_t2597455808 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern "C"  void AndroidJavaStore_Purchase_m4176245687 (AndroidJavaStore_t2597455808 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern "C"  void AndroidJavaStore_FinishTransaction_m2848382231 (AndroidJavaStore_t2597455808 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
