#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t2362096582;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AndroidJavaStore
struct  AndroidJavaStore_t2597455808  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.AndroidJavaStore::m_Store
	AndroidJavaObject_t2362096582 * ___m_Store_0;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(AndroidJavaStore_t2597455808, ___m_Store_0)); }
	inline AndroidJavaObject_t2362096582 * get_m_Store_0() const { return ___m_Store_0; }
	inline AndroidJavaObject_t2362096582 ** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(AndroidJavaObject_t2362096582 * value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Store_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
