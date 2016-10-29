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

// UnityEngine.Purchasing.IDs
struct IDs_t3860457942;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t2638295682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.IDs::.ctor()
extern "C"  void IDs__ctor_m1206690211 (IDs_t3860457942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.IDs::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * IDs_System_Collections_IEnumerable_GetEnumerator_m2246266332 (IDs_t3860457942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern "C"  void IDs_Add_m1562610554 (IDs_t3860457942 * __this, String_t* ___id0, StringU5BU5D_t4054002952* ___stores1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern "C"  String_t* IDs_SpecificIDForStore_m3999326133 (IDs_t3860457942 * __this, String_t* ___store0, String_t* ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> UnityEngine.Purchasing.IDs::GetEnumerator()
extern "C"  Il2CppObject* IDs_GetEnumerator_m3102322120 (IDs_t3860457942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
