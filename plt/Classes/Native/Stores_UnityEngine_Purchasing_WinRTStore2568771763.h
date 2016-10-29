#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t1169042288;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.ILogger
struct ILogger_t629411471;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t2397331331;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t1161948640;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte1661699449.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.WinRTStore
struct  WinRTStore_t2568771763  : public AbstractStore_t1661699449
{
public:
	// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.WinRTStore::win8
	Il2CppObject * ___win8_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.WinRTStore::callback
	Il2CppObject * ___callback_1;
	// Uniject.IUtil UnityEngine.Purchasing.WinRTStore::util
	Il2CppObject * ___util_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.WinRTStore::logger
	Il2CppObject * ___logger_3;

public:
	inline static int32_t get_offset_of_win8_0() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763, ___win8_0)); }
	inline Il2CppObject * get_win8_0() const { return ___win8_0; }
	inline Il2CppObject ** get_address_of_win8_0() { return &___win8_0; }
	inline void set_win8_0(Il2CppObject * value)
	{
		___win8_0 = value;
		Il2CppCodeGenWriteBarrier(&___win8_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763, ___callback_1)); }
	inline Il2CppObject * get_callback_1() const { return ___callback_1; }
	inline Il2CppObject ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Il2CppObject * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_util_2() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763, ___util_2)); }
	inline Il2CppObject * get_util_2() const { return ___util_2; }
	inline Il2CppObject ** get_address_of_util_2() { return &___util_2; }
	inline void set_util_2(Il2CppObject * value)
	{
		___util_2 = value;
		Il2CppCodeGenWriteBarrier(&___util_2, value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763, ___logger_3)); }
	inline Il2CppObject * get_logger_3() const { return ___logger_3; }
	inline Il2CppObject ** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(Il2CppObject * value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier(&___logger_3, value);
	}
};

struct WinRTStore_t2568771763_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore::<>f__am$cache0
	Func_2_t2397331331 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore::<>f__am$cache1
	Func_2_t1161948640 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t2397331331 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t2397331331 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t2397331331 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(WinRTStore_t2568771763_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t1161948640 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t1161948640 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t1161948640 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
