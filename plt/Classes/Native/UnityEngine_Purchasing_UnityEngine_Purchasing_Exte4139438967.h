#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t2971091388;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ938787015.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t4139438967  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_0;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t2971091388 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ProductDescription_t4139438967, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDescription_t4139438967, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstoreSpecificIdU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t4139438967, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_t2971091388 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_t2971091388 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_t2971091388 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmetadataU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t4139438967, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CreceiptU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t4139438967, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtransactionIdU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
