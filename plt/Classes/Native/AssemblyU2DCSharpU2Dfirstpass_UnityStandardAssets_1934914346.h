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
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t1663698965;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C611564875.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t1934914346  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UnityStandardAssets.CrossPlatformInput.Joystick::joystickSprite
	GameObject_t3674682005 * ___joystickSprite_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_3;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::moveToCenter
	bool ___moveToCenter_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t4282066566  ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t1663698965 * ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t1663698965 * ___m_VerticalVirtualAxis_12;

public:
	inline static int32_t get_offset_of_joystickSprite_2() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___joystickSprite_2)); }
	inline GameObject_t3674682005 * get_joystickSprite_2() const { return ___joystickSprite_2; }
	inline GameObject_t3674682005 ** get_address_of_joystickSprite_2() { return &___joystickSprite_2; }
	inline void set_joystickSprite_2(GameObject_t3674682005 * value)
	{
		___joystickSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystickSprite_2, value);
	}

	inline static int32_t get_offset_of_MovementRange_3() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___MovementRange_3)); }
	inline int32_t get_MovementRange_3() const { return ___MovementRange_3; }
	inline int32_t* get_address_of_MovementRange_3() { return &___MovementRange_3; }
	inline void set_MovementRange_3(int32_t value)
	{
		___MovementRange_3 = value;
	}

	inline static int32_t get_offset_of_axesToUse_4() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___axesToUse_4)); }
	inline int32_t get_axesToUse_4() const { return ___axesToUse_4; }
	inline int32_t* get_address_of_axesToUse_4() { return &___axesToUse_4; }
	inline void set_axesToUse_4(int32_t value)
	{
		___axesToUse_4 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___horizontalAxisName_5)); }
	inline String_t* get_horizontalAxisName_5() const { return ___horizontalAxisName_5; }
	inline String_t** get_address_of_horizontalAxisName_5() { return &___horizontalAxisName_5; }
	inline void set_horizontalAxisName_5(String_t* value)
	{
		___horizontalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_5, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_6() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___verticalAxisName_6)); }
	inline String_t* get_verticalAxisName_6() const { return ___verticalAxisName_6; }
	inline String_t** get_address_of_verticalAxisName_6() { return &___verticalAxisName_6; }
	inline void set_verticalAxisName_6(String_t* value)
	{
		___verticalAxisName_6 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_6, value);
	}

	inline static int32_t get_offset_of_moveToCenter_7() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___moveToCenter_7)); }
	inline bool get_moveToCenter_7() const { return ___moveToCenter_7; }
	inline bool* get_address_of_moveToCenter_7() { return &___moveToCenter_7; }
	inline void set_moveToCenter_7(bool value)
	{
		___moveToCenter_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___m_StartPos_8)); }
	inline Vector3_t4282066566  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t4282066566 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t4282066566  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_UseX_9() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___m_UseX_9)); }
	inline bool get_m_UseX_9() const { return ___m_UseX_9; }
	inline bool* get_address_of_m_UseX_9() { return &___m_UseX_9; }
	inline void set_m_UseX_9(bool value)
	{
		___m_UseX_9 = value;
	}

	inline static int32_t get_offset_of_m_UseY_10() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___m_UseY_10)); }
	inline bool get_m_UseY_10() const { return ___m_UseY_10; }
	inline bool* get_address_of_m_UseY_10() { return &___m_UseY_10; }
	inline void set_m_UseY_10(bool value)
	{
		___m_UseY_10 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_11() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___m_HorizontalVirtualAxis_11)); }
	inline VirtualAxis_t1663698965 * get_m_HorizontalVirtualAxis_11() const { return ___m_HorizontalVirtualAxis_11; }
	inline VirtualAxis_t1663698965 ** get_address_of_m_HorizontalVirtualAxis_11() { return &___m_HorizontalVirtualAxis_11; }
	inline void set_m_HorizontalVirtualAxis_11(VirtualAxis_t1663698965 * value)
	{
		___m_HorizontalVirtualAxis_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalVirtualAxis_11, value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_12() { return static_cast<int32_t>(offsetof(Joystick_t1934914346, ___m_VerticalVirtualAxis_12)); }
	inline VirtualAxis_t1663698965 * get_m_VerticalVirtualAxis_12() const { return ___m_VerticalVirtualAxis_12; }
	inline VirtualAxis_t1663698965 ** get_address_of_m_VerticalVirtualAxis_12() { return &___m_VerticalVirtualAxis_12; }
	inline void set_m_VerticalVirtualAxis_12(VirtualAxis_t1663698965 * value)
	{
		___m_VerticalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalVirtualAxis_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
