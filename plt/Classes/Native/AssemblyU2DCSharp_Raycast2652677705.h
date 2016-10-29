#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Raycast
struct  Raycast_t2652677705  : public MonoBehaviour_t667441552
{
public:
	// System.Single Raycast::maxRayDistance
	float ___maxRayDistance_2;
	// System.Boolean Raycast::onGround
	bool ___onGround_3;
	// System.Boolean Raycast::touchingSide
	bool ___touchingSide_4;
	// System.Boolean Raycast::toMove
	bool ___toMove_5;

public:
	inline static int32_t get_offset_of_maxRayDistance_2() { return static_cast<int32_t>(offsetof(Raycast_t2652677705, ___maxRayDistance_2)); }
	inline float get_maxRayDistance_2() const { return ___maxRayDistance_2; }
	inline float* get_address_of_maxRayDistance_2() { return &___maxRayDistance_2; }
	inline void set_maxRayDistance_2(float value)
	{
		___maxRayDistance_2 = value;
	}

	inline static int32_t get_offset_of_onGround_3() { return static_cast<int32_t>(offsetof(Raycast_t2652677705, ___onGround_3)); }
	inline bool get_onGround_3() const { return ___onGround_3; }
	inline bool* get_address_of_onGround_3() { return &___onGround_3; }
	inline void set_onGround_3(bool value)
	{
		___onGround_3 = value;
	}

	inline static int32_t get_offset_of_touchingSide_4() { return static_cast<int32_t>(offsetof(Raycast_t2652677705, ___touchingSide_4)); }
	inline bool get_touchingSide_4() const { return ___touchingSide_4; }
	inline bool* get_address_of_touchingSide_4() { return &___touchingSide_4; }
	inline void set_touchingSide_4(bool value)
	{
		___touchingSide_4 = value;
	}

	inline static int32_t get_offset_of_toMove_5() { return static_cast<int32_t>(offsetof(Raycast_t2652677705, ___toMove_5)); }
	inline bool get_toMove_5() const { return ___toMove_5; }
	inline bool* get_address_of_toMove_5() { return &___toMove_5; }
	inline void set_toMove_5(bool value)
	{
		___toMove_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
