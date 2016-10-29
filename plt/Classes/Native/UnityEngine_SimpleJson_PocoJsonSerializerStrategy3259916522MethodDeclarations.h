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

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t3259916522;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t1882854791;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t2380237798;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t2295861161;
// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t2862688501;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Enum2862688501.h"

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C"  void PocoJsonSerializerStrategy__ctor_m98290550 (PocoJsonSerializerStrategy_t3259916522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C"  void PocoJsonSerializerStrategy__cctor_m2564910839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C"  String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m294662907 (PocoJsonSerializerStrategy_t3259916522 * __this, String_t* ___clrPropertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C"  ConstructorDelegate_t1882854791 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m1098206077 (PocoJsonSerializerStrategy_t3259916522 * __this, Type_t * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_GetterValueFactory_m1085737513 (PocoJsonSerializerStrategy_t3259916522 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_SetterValueFactory_m2124618347 (PocoJsonSerializerStrategy_t3259916522 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m408626704 (PocoJsonSerializerStrategy_t3259916522 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C"  Il2CppObject * PocoJsonSerializerStrategy_SerializeEnum_m3909084616 (PocoJsonSerializerStrategy_t3259916522 * __this, Enum_t2862688501 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3601417165 (PocoJsonSerializerStrategy_t3259916522 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1594419814 (PocoJsonSerializerStrategy_t3259916522 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
