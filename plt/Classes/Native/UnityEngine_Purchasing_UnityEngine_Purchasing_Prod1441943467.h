#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t3948294063;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t3797835584;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t2282304469;
// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct Func_2_t3005125609;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCollection
struct  ProductCollection_t1441943467  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_t3948294063 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_t3948294063 * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_t3797835584* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_t2282304469 * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467, ___m_IdToProduct_0)); }
	inline Dictionary_2_t3948294063 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_t3948294063 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_t3948294063 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_IdToProduct_0, value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_t3948294063 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_t3948294063 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_t3948294063 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreSpecificIdToProduct_1, value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467, ___m_Products_2)); }
	inline ProductU5BU5D_t3797835584* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_t3797835584** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_t3797835584* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Products_2, value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467, ___m_ProductSet_3)); }
	inline HashSet_1_t2282304469 * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_t2282304469 ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_t2282304469 * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProductSet_3, value);
	}
};

struct ProductCollection_t1441943467_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache4
	Func_2_t3005125609 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache5
	Func_2_t3005125609 * ___U3CU3Ef__amU24cache5_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_2_t3005125609 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_2_t3005125609 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_2_t3005125609 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(ProductCollection_t1441943467_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t3005125609 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t3005125609 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t3005125609 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
