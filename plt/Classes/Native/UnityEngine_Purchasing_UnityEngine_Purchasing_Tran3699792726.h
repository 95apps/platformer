#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ILogger
struct ILogger_t629411471;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.TransactionLog
struct  TransactionLog_t3699792726  : public Il2CppObject
{
public:
	// UnityEngine.ILogger UnityEngine.Purchasing.TransactionLog::logger
	Il2CppObject * ___logger_0;
	// System.String UnityEngine.Purchasing.TransactionLog::persistentDataPath
	String_t* ___persistentDataPath_1;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(TransactionLog_t3699792726, ___logger_0)); }
	inline Il2CppObject * get_logger_0() const { return ___logger_0; }
	inline Il2CppObject ** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(Il2CppObject * value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___logger_0, value);
	}

	inline static int32_t get_offset_of_persistentDataPath_1() { return static_cast<int32_t>(offsetof(TransactionLog_t3699792726, ___persistentDataPath_1)); }
	inline String_t* get_persistentDataPath_1() const { return ___persistentDataPath_1; }
	inline String_t** get_address_of_persistentDataPath_1() { return &___persistentDataPath_1; }
	inline void set_persistentDataPath_1(String_t* value)
	{
		___persistentDataPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___persistentDataPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
