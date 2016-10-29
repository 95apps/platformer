#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.Product
struct Product_t3127875693;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseEventArgs
struct  PurchaseEventArgs_t816323924  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t3127875693 * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_t816323924, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t3127875693 * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t3127875693 ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t3127875693 * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpurchasedProductU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
