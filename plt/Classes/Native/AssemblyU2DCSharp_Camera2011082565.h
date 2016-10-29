#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// Platforms
struct Platforms_t4284597824;
// DeathCube
struct DeathCube_t890015913;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera
struct  Camera_t2011082565  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Camera::lookAt
	Transform_t1659122786 * ___lookAt_2;
	// System.Single Camera::smoothSpeed
	float ___smoothSpeed_3;
	// System.Single Camera::deathStep
	float ___deathStep_4;
	// Platforms Camera::platforms
	Platforms_t4284597824 * ___platforms_5;
	// DeathCube Camera::deathCube
	DeathCube_t890015913 * ___deathCube_6;
	// UnityEngine.Vector3 Camera::deathRotateTarget
	Vector3_t4282066566  ___deathRotateTarget_7;
	// UnityEngine.Camera Camera::cameraComponent
	Camera_t2727095145 * ___cameraComponent_8;
	// System.Boolean Camera::beginRevolving
	bool ___beginRevolving_9;
	// System.Boolean Camera::setPositions
	bool ___setPositions_10;
	// System.Int32 Camera::distance
	int32_t ___distance_11;
	// System.Boolean Camera::smooth
	bool ___smooth_12;
	// System.Boolean Camera::firstRotate
	bool ___firstRotate_13;
	// UnityEngine.Vector3 Camera::offset
	Vector3_t4282066566  ___offset_14;
	// UnityEngine.Vector3 Camera::playerStartPos
	Vector3_t4282066566  ___playerStartPos_15;
	// UnityEngine.Vector3 Camera::playerEndPos
	Vector3_t4282066566  ___playerEndPos_16;
	// UnityEngine.Vector3 Camera::playerAvgPos
	Vector3_t4282066566  ___playerAvgPos_17;
	// UnityEngine.Vector3 Camera::playerDeadRotateStart
	Vector3_t4282066566  ___playerDeadRotateStart_18;
	// UnityEngine.Vector3 Camera::startDeathPos
	Vector3_t4282066566  ___startDeathPos_19;
	// UnityEngine.Vector3 Camera::deathTarget
	Vector3_t4282066566  ___deathTarget_20;
	// System.Single Camera::midCamDistance
	float ___midCamDistance_21;
	// System.Single Camera::angle
	float ___angle_22;
	// System.Single Camera::rotateToThis
	float ___rotateToThis_23;
	// System.Single Camera::revolvingAngle
	float ___revolvingAngle_24;

public:
	inline static int32_t get_offset_of_lookAt_2() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___lookAt_2)); }
	inline Transform_t1659122786 * get_lookAt_2() const { return ___lookAt_2; }
	inline Transform_t1659122786 ** get_address_of_lookAt_2() { return &___lookAt_2; }
	inline void set_lookAt_2(Transform_t1659122786 * value)
	{
		___lookAt_2 = value;
		Il2CppCodeGenWriteBarrier(&___lookAt_2, value);
	}

	inline static int32_t get_offset_of_smoothSpeed_3() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___smoothSpeed_3)); }
	inline float get_smoothSpeed_3() const { return ___smoothSpeed_3; }
	inline float* get_address_of_smoothSpeed_3() { return &___smoothSpeed_3; }
	inline void set_smoothSpeed_3(float value)
	{
		___smoothSpeed_3 = value;
	}

	inline static int32_t get_offset_of_deathStep_4() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___deathStep_4)); }
	inline float get_deathStep_4() const { return ___deathStep_4; }
	inline float* get_address_of_deathStep_4() { return &___deathStep_4; }
	inline void set_deathStep_4(float value)
	{
		___deathStep_4 = value;
	}

	inline static int32_t get_offset_of_platforms_5() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___platforms_5)); }
	inline Platforms_t4284597824 * get_platforms_5() const { return ___platforms_5; }
	inline Platforms_t4284597824 ** get_address_of_platforms_5() { return &___platforms_5; }
	inline void set_platforms_5(Platforms_t4284597824 * value)
	{
		___platforms_5 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_5, value);
	}

	inline static int32_t get_offset_of_deathCube_6() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___deathCube_6)); }
	inline DeathCube_t890015913 * get_deathCube_6() const { return ___deathCube_6; }
	inline DeathCube_t890015913 ** get_address_of_deathCube_6() { return &___deathCube_6; }
	inline void set_deathCube_6(DeathCube_t890015913 * value)
	{
		___deathCube_6 = value;
		Il2CppCodeGenWriteBarrier(&___deathCube_6, value);
	}

	inline static int32_t get_offset_of_deathRotateTarget_7() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___deathRotateTarget_7)); }
	inline Vector3_t4282066566  get_deathRotateTarget_7() const { return ___deathRotateTarget_7; }
	inline Vector3_t4282066566 * get_address_of_deathRotateTarget_7() { return &___deathRotateTarget_7; }
	inline void set_deathRotateTarget_7(Vector3_t4282066566  value)
	{
		___deathRotateTarget_7 = value;
	}

	inline static int32_t get_offset_of_cameraComponent_8() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___cameraComponent_8)); }
	inline Camera_t2727095145 * get_cameraComponent_8() const { return ___cameraComponent_8; }
	inline Camera_t2727095145 ** get_address_of_cameraComponent_8() { return &___cameraComponent_8; }
	inline void set_cameraComponent_8(Camera_t2727095145 * value)
	{
		___cameraComponent_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraComponent_8, value);
	}

	inline static int32_t get_offset_of_beginRevolving_9() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___beginRevolving_9)); }
	inline bool get_beginRevolving_9() const { return ___beginRevolving_9; }
	inline bool* get_address_of_beginRevolving_9() { return &___beginRevolving_9; }
	inline void set_beginRevolving_9(bool value)
	{
		___beginRevolving_9 = value;
	}

	inline static int32_t get_offset_of_setPositions_10() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___setPositions_10)); }
	inline bool get_setPositions_10() const { return ___setPositions_10; }
	inline bool* get_address_of_setPositions_10() { return &___setPositions_10; }
	inline void set_setPositions_10(bool value)
	{
		___setPositions_10 = value;
	}

	inline static int32_t get_offset_of_distance_11() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___distance_11)); }
	inline int32_t get_distance_11() const { return ___distance_11; }
	inline int32_t* get_address_of_distance_11() { return &___distance_11; }
	inline void set_distance_11(int32_t value)
	{
		___distance_11 = value;
	}

	inline static int32_t get_offset_of_smooth_12() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___smooth_12)); }
	inline bool get_smooth_12() const { return ___smooth_12; }
	inline bool* get_address_of_smooth_12() { return &___smooth_12; }
	inline void set_smooth_12(bool value)
	{
		___smooth_12 = value;
	}

	inline static int32_t get_offset_of_firstRotate_13() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___firstRotate_13)); }
	inline bool get_firstRotate_13() const { return ___firstRotate_13; }
	inline bool* get_address_of_firstRotate_13() { return &___firstRotate_13; }
	inline void set_firstRotate_13(bool value)
	{
		___firstRotate_13 = value;
	}

	inline static int32_t get_offset_of_offset_14() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___offset_14)); }
	inline Vector3_t4282066566  get_offset_14() const { return ___offset_14; }
	inline Vector3_t4282066566 * get_address_of_offset_14() { return &___offset_14; }
	inline void set_offset_14(Vector3_t4282066566  value)
	{
		___offset_14 = value;
	}

	inline static int32_t get_offset_of_playerStartPos_15() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___playerStartPos_15)); }
	inline Vector3_t4282066566  get_playerStartPos_15() const { return ___playerStartPos_15; }
	inline Vector3_t4282066566 * get_address_of_playerStartPos_15() { return &___playerStartPos_15; }
	inline void set_playerStartPos_15(Vector3_t4282066566  value)
	{
		___playerStartPos_15 = value;
	}

	inline static int32_t get_offset_of_playerEndPos_16() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___playerEndPos_16)); }
	inline Vector3_t4282066566  get_playerEndPos_16() const { return ___playerEndPos_16; }
	inline Vector3_t4282066566 * get_address_of_playerEndPos_16() { return &___playerEndPos_16; }
	inline void set_playerEndPos_16(Vector3_t4282066566  value)
	{
		___playerEndPos_16 = value;
	}

	inline static int32_t get_offset_of_playerAvgPos_17() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___playerAvgPos_17)); }
	inline Vector3_t4282066566  get_playerAvgPos_17() const { return ___playerAvgPos_17; }
	inline Vector3_t4282066566 * get_address_of_playerAvgPos_17() { return &___playerAvgPos_17; }
	inline void set_playerAvgPos_17(Vector3_t4282066566  value)
	{
		___playerAvgPos_17 = value;
	}

	inline static int32_t get_offset_of_playerDeadRotateStart_18() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___playerDeadRotateStart_18)); }
	inline Vector3_t4282066566  get_playerDeadRotateStart_18() const { return ___playerDeadRotateStart_18; }
	inline Vector3_t4282066566 * get_address_of_playerDeadRotateStart_18() { return &___playerDeadRotateStart_18; }
	inline void set_playerDeadRotateStart_18(Vector3_t4282066566  value)
	{
		___playerDeadRotateStart_18 = value;
	}

	inline static int32_t get_offset_of_startDeathPos_19() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___startDeathPos_19)); }
	inline Vector3_t4282066566  get_startDeathPos_19() const { return ___startDeathPos_19; }
	inline Vector3_t4282066566 * get_address_of_startDeathPos_19() { return &___startDeathPos_19; }
	inline void set_startDeathPos_19(Vector3_t4282066566  value)
	{
		___startDeathPos_19 = value;
	}

	inline static int32_t get_offset_of_deathTarget_20() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___deathTarget_20)); }
	inline Vector3_t4282066566  get_deathTarget_20() const { return ___deathTarget_20; }
	inline Vector3_t4282066566 * get_address_of_deathTarget_20() { return &___deathTarget_20; }
	inline void set_deathTarget_20(Vector3_t4282066566  value)
	{
		___deathTarget_20 = value;
	}

	inline static int32_t get_offset_of_midCamDistance_21() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___midCamDistance_21)); }
	inline float get_midCamDistance_21() const { return ___midCamDistance_21; }
	inline float* get_address_of_midCamDistance_21() { return &___midCamDistance_21; }
	inline void set_midCamDistance_21(float value)
	{
		___midCamDistance_21 = value;
	}

	inline static int32_t get_offset_of_angle_22() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___angle_22)); }
	inline float get_angle_22() const { return ___angle_22; }
	inline float* get_address_of_angle_22() { return &___angle_22; }
	inline void set_angle_22(float value)
	{
		___angle_22 = value;
	}

	inline static int32_t get_offset_of_rotateToThis_23() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___rotateToThis_23)); }
	inline float get_rotateToThis_23() const { return ___rotateToThis_23; }
	inline float* get_address_of_rotateToThis_23() { return &___rotateToThis_23; }
	inline void set_rotateToThis_23(float value)
	{
		___rotateToThis_23 = value;
	}

	inline static int32_t get_offset_of_revolvingAngle_24() { return static_cast<int32_t>(offsetof(Camera_t2011082565, ___revolvingAngle_24)); }
	inline float get_revolvingAngle_24() const { return ___revolvingAngle_24; }
	inline float* get_address_of_revolvingAngle_24() { return &___revolvingAngle_24; }
	inline void set_revolvingAngle_24(float value)
	{
		___revolvingAngle_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
