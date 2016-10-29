#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Platforms
struct Platforms_t4284597824;
// DeathCube
struct DeathCube_t890015913;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// Raycast
struct Raycast_t2652677705;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.TrailRenderer
struct TrailRenderer_t2401074527;
// Skydome
struct Skydome_t3826515940;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t667441552
{
public:
	// Platforms Player::platforms
	Platforms_t4284597824 * ___platforms_2;
	// DeathCube Player::deathCube
	DeathCube_t890015913 * ___deathCube_3;
	// System.Boolean Player::isResurrecting
	bool ___isResurrecting_4;
	// System.Boolean Player::canJump
	bool ___canJump_5;
	// System.Single Player::movingSpeed
	float ___movingSpeed_6;
	// System.Single Player::jumpHeight
	float ___jumpHeight_7;
	// System.Single Player::jumpSpeed
	float ___jumpSpeed_8;
	// System.Single Player::distanceTravelled
	float ___distanceTravelled_9;
	// System.Single Player::hookTimer
	float ___hookTimer_10;
	// System.Single Player::hookAngle
	float ___hookAngle_11;
	// UnityEngine.Rigidbody Player::rb
	Rigidbody_t3346577219 * ___rb_12;
	// UnityEngine.Vector3 Player::velocity
	Vector3_t4282066566  ___velocity_13;
	// UnityEngine.Vector3 Player::lastFramePosition
	Vector3_t4282066566  ___lastFramePosition_14;
	// UnityEngine.Vector3 Player::firstPlatPos
	Vector3_t4282066566  ___firstPlatPos_15;
	// UnityEngine.Vector3 Player::hookTarget
	Vector3_t4282066566  ___hookTarget_16;
	// UnityEngine.Vector3 Player::hookEnd
	Vector3_t4282066566  ___hookEnd_17;
	// Raycast Player::Raycast
	Raycast_t2652677705 * ___Raycast_18;
	// UnityEngine.AudioClip[] Player::bounceSounds
	AudioClipU5BU5D_t3001083477* ___bounceSounds_19;
	// UnityEngine.AudioSource Player::mySound
	AudioSource_t1740077639 * ___mySound_20;
	// UnityEngine.TrailRenderer Player::trail
	TrailRenderer_t2401074527 * ___trail_21;
	// Skydome Player::skydome
	Skydome_t3826515940 * ___skydome_22;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_23;
	// UnityEngine.GameObject Player::big
	GameObject_t3674682005 * ___big_24;
	// System.Single Player::flipStep
	float ___flipStep_25;
	// System.Single Player::trailLength
	float ___trailLength_26;
	// System.Boolean Player::hooking
	bool ___hooking_27;
	// System.Boolean Player::setHookEnd
	bool ___setHookEnd_28;
	// System.Boolean Player::setHookTarget
	bool ___setHookTarget_29;
	// System.Boolean Player::canFlip
	bool ___canFlip_30;

public:
	inline static int32_t get_offset_of_platforms_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___platforms_2)); }
	inline Platforms_t4284597824 * get_platforms_2() const { return ___platforms_2; }
	inline Platforms_t4284597824 ** get_address_of_platforms_2() { return &___platforms_2; }
	inline void set_platforms_2(Platforms_t4284597824 * value)
	{
		___platforms_2 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_2, value);
	}

	inline static int32_t get_offset_of_deathCube_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___deathCube_3)); }
	inline DeathCube_t890015913 * get_deathCube_3() const { return ___deathCube_3; }
	inline DeathCube_t890015913 ** get_address_of_deathCube_3() { return &___deathCube_3; }
	inline void set_deathCube_3(DeathCube_t890015913 * value)
	{
		___deathCube_3 = value;
		Il2CppCodeGenWriteBarrier(&___deathCube_3, value);
	}

	inline static int32_t get_offset_of_isResurrecting_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___isResurrecting_4)); }
	inline bool get_isResurrecting_4() const { return ___isResurrecting_4; }
	inline bool* get_address_of_isResurrecting_4() { return &___isResurrecting_4; }
	inline void set_isResurrecting_4(bool value)
	{
		___isResurrecting_4 = value;
	}

	inline static int32_t get_offset_of_canJump_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___canJump_5)); }
	inline bool get_canJump_5() const { return ___canJump_5; }
	inline bool* get_address_of_canJump_5() { return &___canJump_5; }
	inline void set_canJump_5(bool value)
	{
		___canJump_5 = value;
	}

	inline static int32_t get_offset_of_movingSpeed_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___movingSpeed_6)); }
	inline float get_movingSpeed_6() const { return ___movingSpeed_6; }
	inline float* get_address_of_movingSpeed_6() { return &___movingSpeed_6; }
	inline void set_movingSpeed_6(float value)
	{
		___movingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___jumpHeight_7)); }
	inline float get_jumpHeight_7() const { return ___jumpHeight_7; }
	inline float* get_address_of_jumpHeight_7() { return &___jumpHeight_7; }
	inline void set_jumpHeight_7(float value)
	{
		___jumpHeight_7 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___jumpSpeed_8)); }
	inline float get_jumpSpeed_8() const { return ___jumpSpeed_8; }
	inline float* get_address_of_jumpSpeed_8() { return &___jumpSpeed_8; }
	inline void set_jumpSpeed_8(float value)
	{
		___jumpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_distanceTravelled_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___distanceTravelled_9)); }
	inline float get_distanceTravelled_9() const { return ___distanceTravelled_9; }
	inline float* get_address_of_distanceTravelled_9() { return &___distanceTravelled_9; }
	inline void set_distanceTravelled_9(float value)
	{
		___distanceTravelled_9 = value;
	}

	inline static int32_t get_offset_of_hookTimer_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hookTimer_10)); }
	inline float get_hookTimer_10() const { return ___hookTimer_10; }
	inline float* get_address_of_hookTimer_10() { return &___hookTimer_10; }
	inline void set_hookTimer_10(float value)
	{
		___hookTimer_10 = value;
	}

	inline static int32_t get_offset_of_hookAngle_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hookAngle_11)); }
	inline float get_hookAngle_11() const { return ___hookAngle_11; }
	inline float* get_address_of_hookAngle_11() { return &___hookAngle_11; }
	inline void set_hookAngle_11(float value)
	{
		___hookAngle_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___rb_12)); }
	inline Rigidbody_t3346577219 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t3346577219 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier(&___rb_12, value);
	}

	inline static int32_t get_offset_of_velocity_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___velocity_13)); }
	inline Vector3_t4282066566  get_velocity_13() const { return ___velocity_13; }
	inline Vector3_t4282066566 * get_address_of_velocity_13() { return &___velocity_13; }
	inline void set_velocity_13(Vector3_t4282066566  value)
	{
		___velocity_13 = value;
	}

	inline static int32_t get_offset_of_lastFramePosition_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___lastFramePosition_14)); }
	inline Vector3_t4282066566  get_lastFramePosition_14() const { return ___lastFramePosition_14; }
	inline Vector3_t4282066566 * get_address_of_lastFramePosition_14() { return &___lastFramePosition_14; }
	inline void set_lastFramePosition_14(Vector3_t4282066566  value)
	{
		___lastFramePosition_14 = value;
	}

	inline static int32_t get_offset_of_firstPlatPos_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___firstPlatPos_15)); }
	inline Vector3_t4282066566  get_firstPlatPos_15() const { return ___firstPlatPos_15; }
	inline Vector3_t4282066566 * get_address_of_firstPlatPos_15() { return &___firstPlatPos_15; }
	inline void set_firstPlatPos_15(Vector3_t4282066566  value)
	{
		___firstPlatPos_15 = value;
	}

	inline static int32_t get_offset_of_hookTarget_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hookTarget_16)); }
	inline Vector3_t4282066566  get_hookTarget_16() const { return ___hookTarget_16; }
	inline Vector3_t4282066566 * get_address_of_hookTarget_16() { return &___hookTarget_16; }
	inline void set_hookTarget_16(Vector3_t4282066566  value)
	{
		___hookTarget_16 = value;
	}

	inline static int32_t get_offset_of_hookEnd_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hookEnd_17)); }
	inline Vector3_t4282066566  get_hookEnd_17() const { return ___hookEnd_17; }
	inline Vector3_t4282066566 * get_address_of_hookEnd_17() { return &___hookEnd_17; }
	inline void set_hookEnd_17(Vector3_t4282066566  value)
	{
		___hookEnd_17 = value;
	}

	inline static int32_t get_offset_of_Raycast_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___Raycast_18)); }
	inline Raycast_t2652677705 * get_Raycast_18() const { return ___Raycast_18; }
	inline Raycast_t2652677705 ** get_address_of_Raycast_18() { return &___Raycast_18; }
	inline void set_Raycast_18(Raycast_t2652677705 * value)
	{
		___Raycast_18 = value;
		Il2CppCodeGenWriteBarrier(&___Raycast_18, value);
	}

	inline static int32_t get_offset_of_bounceSounds_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___bounceSounds_19)); }
	inline AudioClipU5BU5D_t3001083477* get_bounceSounds_19() const { return ___bounceSounds_19; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_bounceSounds_19() { return &___bounceSounds_19; }
	inline void set_bounceSounds_19(AudioClipU5BU5D_t3001083477* value)
	{
		___bounceSounds_19 = value;
		Il2CppCodeGenWriteBarrier(&___bounceSounds_19, value);
	}

	inline static int32_t get_offset_of_mySound_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mySound_20)); }
	inline AudioSource_t1740077639 * get_mySound_20() const { return ___mySound_20; }
	inline AudioSource_t1740077639 ** get_address_of_mySound_20() { return &___mySound_20; }
	inline void set_mySound_20(AudioSource_t1740077639 * value)
	{
		___mySound_20 = value;
		Il2CppCodeGenWriteBarrier(&___mySound_20, value);
	}

	inline static int32_t get_offset_of_trail_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___trail_21)); }
	inline TrailRenderer_t2401074527 * get_trail_21() const { return ___trail_21; }
	inline TrailRenderer_t2401074527 ** get_address_of_trail_21() { return &___trail_21; }
	inline void set_trail_21(TrailRenderer_t2401074527 * value)
	{
		___trail_21 = value;
		Il2CppCodeGenWriteBarrier(&___trail_21, value);
	}

	inline static int32_t get_offset_of_skydome_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___skydome_22)); }
	inline Skydome_t3826515940 * get_skydome_22() const { return ___skydome_22; }
	inline Skydome_t3826515940 ** get_address_of_skydome_22() { return &___skydome_22; }
	inline void set_skydome_22(Skydome_t3826515940 * value)
	{
		___skydome_22 = value;
		Il2CppCodeGenWriteBarrier(&___skydome_22, value);
	}

	inline static int32_t get_offset_of_mainCamera_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_23)); }
	inline GameObject_t3674682005 * get_mainCamera_23() const { return ___mainCamera_23; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_23() { return &___mainCamera_23; }
	inline void set_mainCamera_23(GameObject_t3674682005 * value)
	{
		___mainCamera_23 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_23, value);
	}

	inline static int32_t get_offset_of_big_24() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___big_24)); }
	inline GameObject_t3674682005 * get_big_24() const { return ___big_24; }
	inline GameObject_t3674682005 ** get_address_of_big_24() { return &___big_24; }
	inline void set_big_24(GameObject_t3674682005 * value)
	{
		___big_24 = value;
		Il2CppCodeGenWriteBarrier(&___big_24, value);
	}

	inline static int32_t get_offset_of_flipStep_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___flipStep_25)); }
	inline float get_flipStep_25() const { return ___flipStep_25; }
	inline float* get_address_of_flipStep_25() { return &___flipStep_25; }
	inline void set_flipStep_25(float value)
	{
		___flipStep_25 = value;
	}

	inline static int32_t get_offset_of_trailLength_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___trailLength_26)); }
	inline float get_trailLength_26() const { return ___trailLength_26; }
	inline float* get_address_of_trailLength_26() { return &___trailLength_26; }
	inline void set_trailLength_26(float value)
	{
		___trailLength_26 = value;
	}

	inline static int32_t get_offset_of_hooking_27() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___hooking_27)); }
	inline bool get_hooking_27() const { return ___hooking_27; }
	inline bool* get_address_of_hooking_27() { return &___hooking_27; }
	inline void set_hooking_27(bool value)
	{
		___hooking_27 = value;
	}

	inline static int32_t get_offset_of_setHookEnd_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___setHookEnd_28)); }
	inline bool get_setHookEnd_28() const { return ___setHookEnd_28; }
	inline bool* get_address_of_setHookEnd_28() { return &___setHookEnd_28; }
	inline void set_setHookEnd_28(bool value)
	{
		___setHookEnd_28 = value;
	}

	inline static int32_t get_offset_of_setHookTarget_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___setHookTarget_29)); }
	inline bool get_setHookTarget_29() const { return ___setHookTarget_29; }
	inline bool* get_address_of_setHookTarget_29() { return &___setHookTarget_29; }
	inline void set_setHookTarget_29(bool value)
	{
		___setHookTarget_29 = value;
	}

	inline static int32_t get_offset_of_canFlip_30() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___canFlip_30)); }
	inline bool get_canFlip_30() const { return ___canFlip_30; }
	inline bool* get_address_of_canFlip_30() { return &___canFlip_30; }
	inline void set_canFlip_30(bool value)
	{
		___canFlip_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
