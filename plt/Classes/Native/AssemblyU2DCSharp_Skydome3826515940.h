#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// Skydome
struct Skydome_t3826515940;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skydome
struct  Skydome_t3826515940  : public MonoBehaviour_t667441552
{
public:
	// System.Single Skydome::scrollSpeed
	float ___scrollSpeed_2;
	// UnityEngine.Renderer Skydome::rend
	Renderer_t3076687687 * ___rend_3;
	// UnityEngine.GameObject Skydome::player
	GameObject_t3674682005 * ___player_4;
	// UnityEngine.Color32[] Skydome::skyColors
	Color32U5BU5D_t2960766953* ___skyColors_5;
	// System.Int32 Skydome::currentColor
	int32_t ___currentColor_7;
	// System.Single Skydome::colorStep
	float ___colorStep_8;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rend_3() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___rend_3)); }
	inline Renderer_t3076687687 * get_rend_3() const { return ___rend_3; }
	inline Renderer_t3076687687 ** get_address_of_rend_3() { return &___rend_3; }
	inline void set_rend_3(Renderer_t3076687687 * value)
	{
		___rend_3 = value;
		Il2CppCodeGenWriteBarrier(&___rend_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___player_4)); }
	inline GameObject_t3674682005 * get_player_4() const { return ___player_4; }
	inline GameObject_t3674682005 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t3674682005 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_skyColors_5() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___skyColors_5)); }
	inline Color32U5BU5D_t2960766953* get_skyColors_5() const { return ___skyColors_5; }
	inline Color32U5BU5D_t2960766953** get_address_of_skyColors_5() { return &___skyColors_5; }
	inline void set_skyColors_5(Color32U5BU5D_t2960766953* value)
	{
		___skyColors_5 = value;
		Il2CppCodeGenWriteBarrier(&___skyColors_5, value);
	}

	inline static int32_t get_offset_of_currentColor_7() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___currentColor_7)); }
	inline int32_t get_currentColor_7() const { return ___currentColor_7; }
	inline int32_t* get_address_of_currentColor_7() { return &___currentColor_7; }
	inline void set_currentColor_7(int32_t value)
	{
		___currentColor_7 = value;
	}

	inline static int32_t get_offset_of_colorStep_8() { return static_cast<int32_t>(offsetof(Skydome_t3826515940, ___colorStep_8)); }
	inline float get_colorStep_8() const { return ___colorStep_8; }
	inline float* get_address_of_colorStep_8() { return &___colorStep_8; }
	inline void set_colorStep_8(float value)
	{
		___colorStep_8 = value;
	}
};

struct Skydome_t3826515940_StaticFields
{
public:
	// Skydome Skydome::Instance
	Skydome_t3826515940 * ___Instance_6;

public:
	inline static int32_t get_offset_of_Instance_6() { return static_cast<int32_t>(offsetof(Skydome_t3826515940_StaticFields, ___Instance_6)); }
	inline Skydome_t3826515940 * get_Instance_6() const { return ___Instance_6; }
	inline Skydome_t3826515940 ** get_address_of_Instance_6() { return &___Instance_6; }
	inline void set_Instance_6(Skydome_t3826515940 * value)
	{
		___Instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
