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

// System.String
struct String_t;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_t1174783389;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t1212657223;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t3792620253;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t2971091388;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "mscorlib_System_String7231557.h"

// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* JSONSerializer_SerializeProductDef_m3997690178 (Il2CppObject * __this /* static, unused */, ProductDefinition_t2168837728 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDefs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  String_t* JSONSerializer_SerializeProductDefs_m136126014 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.JSONSerializer::DeserializeProductDescriptions(System.String)
extern "C"  List_1_t1212657223 * JSONSerializer_DeserializeProductDescriptions_m1198492009 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONSerializer::DeserializeFailureReason(System.String)
extern "C"  PurchaseFailureDescription_t3792620253 * JSONSerializer_DeserializeFailureReason_m1418654939 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.JSONSerializer::DeserializeMetadata(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  ProductMetadata_t2971091388 * JSONSerializer_DeserializeMetadata_m1523218655 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Dictionary_2_t696267445 * JSONSerializer_EncodeProductDef_m1666632175 (Il2CppObject * __this /* static, unused */, ProductDefinition_t2168837728 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
