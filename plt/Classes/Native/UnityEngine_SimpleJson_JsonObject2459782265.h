﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.JsonObject
struct  JsonObject_t2459782265  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SimpleJson.JsonObject::_members
	Dictionary_2_t696267445 * ____members_0;

public:
	inline static int32_t get_offset_of__members_0() { return static_cast<int32_t>(offsetof(JsonObject_t2459782265, ____members_0)); }
	inline Dictionary_2_t696267445 * get__members_0() const { return ____members_0; }
	inline Dictionary_2_t696267445 ** get_address_of__members_0() { return &____members_0; }
	inline void set__members_0(Dictionary_2_t696267445 * value)
	{
		____members_0 = value;
		Il2CppCodeGenWriteBarrier(&____members_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
