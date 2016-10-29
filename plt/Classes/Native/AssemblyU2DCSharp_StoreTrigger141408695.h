#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoreTrigger
struct  StoreTrigger_t141408695  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject StoreTrigger::storeCanvas
	GameObject_t3674682005 * ___storeCanvas_2;
	// UnityEngine.GameObject StoreTrigger::settingsCanvas
	GameObject_t3674682005 * ___settingsCanvas_3;

public:
	inline static int32_t get_offset_of_storeCanvas_2() { return static_cast<int32_t>(offsetof(StoreTrigger_t141408695, ___storeCanvas_2)); }
	inline GameObject_t3674682005 * get_storeCanvas_2() const { return ___storeCanvas_2; }
	inline GameObject_t3674682005 ** get_address_of_storeCanvas_2() { return &___storeCanvas_2; }
	inline void set_storeCanvas_2(GameObject_t3674682005 * value)
	{
		___storeCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___storeCanvas_2, value);
	}

	inline static int32_t get_offset_of_settingsCanvas_3() { return static_cast<int32_t>(offsetof(StoreTrigger_t141408695, ___settingsCanvas_3)); }
	inline GameObject_t3674682005 * get_settingsCanvas_3() const { return ___settingsCanvas_3; }
	inline GameObject_t3674682005 ** get_address_of_settingsCanvas_3() { return &___settingsCanvas_3; }
	inline void set_settingsCanvas_3(GameObject_t3674682005 * value)
	{
		___settingsCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingsCanvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
