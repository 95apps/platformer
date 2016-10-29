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

// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t2971091388;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2971091388.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern "C"  void Product__ctor_m3050926810 (Product_t3127875693 * __this, ProductDefinition_t2168837728 * ___definition0, ProductMetadata_t2971091388 * ___metadata1, String_t* ___receipt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product__ctor_m329127710 (Product_t3127875693 * __this, ProductDefinition_t2168837728 * ___definition0, ProductMetadata_t2971091388 * ___metadata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t2168837728 * Product_get_definition_m2740826390 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern "C"  void Product_set_definition_m1087154463 (Product_t3127875693 * __this, ProductDefinition_t2168837728 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t2971091388 * Product_get_metadata_m1996137622 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product_set_metadata_m2987604959 (Product_t3127875693 * __this, ProductMetadata_t2971091388 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3065859940 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern "C"  void Product_set_availableToPurchase_m3344719689 (Product_t3127875693 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m3111644087 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern "C"  void Product_set_transactionID_m145730364 (Product_t3127875693 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern "C"  bool Product_get_hasReceipt_m4115433121 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m1032630134 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern "C"  void Product_set_receipt_m344307357 (Product_t3127875693 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::Equals(System.Object)
extern "C"  bool Product_Equals_m3246009211 (Product_t3127875693 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.Product::GetHashCode()
extern "C"  int32_t Product_GetHashCode_m2628034911 (Product_t3127875693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
