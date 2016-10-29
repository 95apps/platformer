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

// SimpleJson.JsonObject
struct JsonObject_t2459782265;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t770439062;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t722696174;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t2506913200;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_595048151.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C"  void JsonObject__ctor_m4099346119 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonObject_System_Collections_IEnumerable_GetEnumerator_m463473096 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C"  void JsonObject_Add_m2475110730 (JsonObject_t2459782265 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::ContainsKey(System.String)
extern "C"  bool JsonObject_ContainsKey_m1515146327 (JsonObject_t2459782265 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C"  Il2CppObject* JsonObject_get_Keys_m148532872 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C"  bool JsonObject_TryGetValue_m3343055325 (JsonObject_t2459782265 * __this, String_t* ___key0, Il2CppObject ** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C"  Il2CppObject* JsonObject_get_Values_m1000452872 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C"  Il2CppObject * JsonObject_get_Item_m3228701406 (JsonObject_t2459782265 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C"  void JsonObject_set_Item_m2392368579 (JsonObject_t2459782265 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  void JsonObject_Add_m329961947 (JsonObject_t2459782265 * __this, KeyValuePair_2_t595048151  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C"  void JsonObject_Clear_m1505479410 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Contains_m1982716011 (JsonObject_t2459782265 * __this, KeyValuePair_2_t595048151  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C"  void JsonObject_CopyTo_m3276053367 (JsonObject_t2459782265 * __this, KeyValuePair_2U5BU5D_t722696174* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C"  int32_t JsonObject_get_Count_m287878091 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C"  bool JsonObject_get_IsReadOnly_m1285123564 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C"  bool JsonObject_Remove_m4025221968 (JsonObject_t2459782265 * __this, KeyValuePair_2_t595048151  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C"  Il2CppObject* JsonObject_GetEnumerator_m1456030472 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C"  String_t* JsonObject_ToString_m1046229766 (JsonObject_t2459782265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
