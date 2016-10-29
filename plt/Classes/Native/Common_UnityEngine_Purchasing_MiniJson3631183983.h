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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJson
struct  MiniJson_t3631183983  : public Il2CppObject
{
public:

public:
};

struct MiniJson_t3631183983_StaticFields
{
public:
	// System.Int32 UnityEngine.Purchasing.MiniJson::s_LastErrorIndex
	int32_t ___s_LastErrorIndex_0;
	// System.String UnityEngine.Purchasing.MiniJson::s_LastDecode
	String_t* ___s_LastDecode_1;

public:
	inline static int32_t get_offset_of_s_LastErrorIndex_0() { return static_cast<int32_t>(offsetof(MiniJson_t3631183983_StaticFields, ___s_LastErrorIndex_0)); }
	inline int32_t get_s_LastErrorIndex_0() const { return ___s_LastErrorIndex_0; }
	inline int32_t* get_address_of_s_LastErrorIndex_0() { return &___s_LastErrorIndex_0; }
	inline void set_s_LastErrorIndex_0(int32_t value)
	{
		___s_LastErrorIndex_0 = value;
	}

	inline static int32_t get_offset_of_s_LastDecode_1() { return static_cast<int32_t>(offsetof(MiniJson_t3631183983_StaticFields, ___s_LastDecode_1)); }
	inline String_t* get_s_LastDecode_1() const { return ___s_LastDecode_1; }
	inline String_t** get_address_of_s_LastDecode_1() { return &___s_LastDecode_1; }
	inline void set_s_LastDecode_1(String_t* value)
	{
		___s_LastDecode_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_LastDecode_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
