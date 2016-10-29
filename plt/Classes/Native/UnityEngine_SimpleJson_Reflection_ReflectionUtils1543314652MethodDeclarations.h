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

// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3142747279;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t4225181682;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t2978998927;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t1882854791;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t1981946083;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t1893366255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266.h"

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m2088930786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetConstructors_m1067993841 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C"  ConstructorInfo_t4136801618 * ReflectionUtils_GetConstructorInfo_m3599392238 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3339007067* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m1583223718 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m973867185 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m994959470 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m4039997154 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t1882854791 * ReflectionUtils_GetContructor_m3992972374 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3339007067* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C"  ConstructorDelegate_t1882854791 * ReflectionUtils_GetConstructorByReflection_m3557144571 (Il2CppObject * __this /* static, unused */, ConstructorInfo_t4136801618 * ___constructorInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t1882854791 * ReflectionUtils_GetConstructorByReflection_m3781484951 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3339007067* ___argsType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t1981946083 * ReflectionUtils_GetGetMethod_m65760451 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t1981946083 * ReflectionUtils_GetGetMethod_m1368925476 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t1981946083 * ReflectionUtils_GetGetMethodByReflection_m1893214021 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t1981946083 * ReflectionUtils_GetGetMethodByReflection_m134171106 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t1893366255 * ReflectionUtils_GetSetMethod_m2126017499 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t1893366255 * ReflectionUtils_GetSetMethod_m3611702540 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t1893366255 * ReflectionUtils_GetSetMethodByReflection_m295389789 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t1893366255 * ReflectionUtils_GetSetMethodByReflection_m1288486346 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
