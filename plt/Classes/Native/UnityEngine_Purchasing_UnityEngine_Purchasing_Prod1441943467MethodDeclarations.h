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

// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t1441943467;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t3797835584;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t2133821354;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t2282304469;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"

// System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern "C"  void ProductCollection__ctor_m2884132982 (ProductCollection_t1441943467 * __this, ProductU5BU5D_t3797835584* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductCollection::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void ProductCollection_AddProducts_m4005341042 (ProductCollection_t1441943467 * __this, Il2CppObject* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::get_set()
extern "C"  HashSet_1_t2282304469 * ProductCollection_get_set_m63387292 (ProductCollection_t1441943467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern "C"  ProductU5BU5D_t3797835584* ProductCollection_get_all_m2017284433 (ProductCollection_t1441943467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t3127875693 * ProductCollection_WithID_m734176566 (ProductCollection_t1441943467 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t3127875693 * ProductCollection_WithStoreSpecificID_m454515299 (ProductCollection_t1441943467 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__5(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__5_m2416184880 (Il2CppObject * __this /* static, unused */, Product_t3127875693 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__6(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__6_m232507953 (Il2CppObject * __this /* static, unused */, Product_t3127875693 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
