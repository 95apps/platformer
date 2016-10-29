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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  Il2CppObject * MiniJson_JsonDecode_m2843783475 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m2754210443 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJson::ParseObject(System.Char[],System.Int32&)
extern "C"  Dictionary_2_t696267445 * MiniJson_ParseObject_m1670910516 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJson::ParseArray(System.Char[],System.Int32&)
extern "C"  List_1_t1244034627 * MiniJson_ParseArray_m3089123221 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJson_ParseValue_m1578679080 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::ParseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJson_ParseString_m482909589 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Purchasing.MiniJson::ParseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJson_ParseNumber_m2837772573 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_GetLastIndexOfNumber_m922716904 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJson_EatWhitespace_m896961191 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_LookAhead_m3136306010 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJson_NextToken_m3670730190 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeObject(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeObject_m656519076 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___anObject0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeDictionary_m2310471245 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dict0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeArray(System.Collections.Generic.List`1<System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeArray_m2441991839 (Il2CppObject * __this /* static, unused */, List_1_t1244034627 * ___anArray0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeValue_m110904871 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeString_m2250824353 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeNumber_m3654937257 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::.cctor()
extern "C"  void MiniJson__cctor_m3268821559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
