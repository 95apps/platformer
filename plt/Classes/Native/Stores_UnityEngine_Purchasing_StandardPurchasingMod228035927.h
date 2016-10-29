#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t4043312887;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct  MicrosoftConfiguration_t228035927  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::useMock
	bool ___useMock_0;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::module
	StandardPurchasingModule_t4043312887 * ___module_1;

public:
	inline static int32_t get_offset_of_useMock_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t228035927, ___useMock_0)); }
	inline bool get_useMock_0() const { return ___useMock_0; }
	inline bool* get_address_of_useMock_0() { return &___useMock_0; }
	inline void set_useMock_0(bool value)
	{
		___useMock_0 = value;
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t228035927, ___module_1)); }
	inline StandardPurchasingModule_t4043312887 * get_module_1() const { return ___module_1; }
	inline StandardPurchasingModule_t4043312887 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(StandardPurchasingModule_t4043312887 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier(&___module_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
