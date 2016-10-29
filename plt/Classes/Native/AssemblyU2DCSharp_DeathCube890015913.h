#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t2393081601;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// StoreTrigger
struct StoreTrigger_t141408695;
// UnityEngine.TrailRenderer
struct TrailRenderer_t2401074527;
// Platforms
struct Platforms_t4284597824;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeathCube
struct  DeathCube_t890015913  : public MonoBehaviour_t667441552
{
public:
	// Player DeathCube::player
	Player_t2393081601 * ___player_2;
	// System.Boolean DeathCube::playerDead
	bool ___playerDead_3;
	// UnityEngine.Rigidbody DeathCube::playerRb
	Rigidbody_t3346577219 * ___playerRb_4;
	// UnityEngine.Vector3 DeathCube::initialPos
	Vector3_t4282066566  ___initialPos_5;
	// UnityEngine.Vector3 DeathCube::playerVelocity
	Vector3_t4282066566  ___playerVelocity_6;
	// UnityEngine.GameObject DeathCube::canvas
	GameObject_t3674682005 * ___canvas_7;
	// StoreTrigger DeathCube::StoreTrigger
	StoreTrigger_t141408695 * ___StoreTrigger_8;
	// UnityEngine.GameObject DeathCube::FloorCanvas
	GameObject_t3674682005 * ___FloorCanvas_9;
	// UnityEngine.TrailRenderer DeathCube::trail
	TrailRenderer_t2401074527 * ___trail_10;
	// System.Single DeathCube::startWidth
	float ___startWidth_11;
	// Platforms DeathCube::platforms
	Platforms_t4284597824 * ___platforms_12;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___player_2)); }
	inline Player_t2393081601 * get_player_2() const { return ___player_2; }
	inline Player_t2393081601 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t2393081601 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerDead_3() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___playerDead_3)); }
	inline bool get_playerDead_3() const { return ___playerDead_3; }
	inline bool* get_address_of_playerDead_3() { return &___playerDead_3; }
	inline void set_playerDead_3(bool value)
	{
		___playerDead_3 = value;
	}

	inline static int32_t get_offset_of_playerRb_4() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___playerRb_4)); }
	inline Rigidbody_t3346577219 * get_playerRb_4() const { return ___playerRb_4; }
	inline Rigidbody_t3346577219 ** get_address_of_playerRb_4() { return &___playerRb_4; }
	inline void set_playerRb_4(Rigidbody_t3346577219 * value)
	{
		___playerRb_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_4, value);
	}

	inline static int32_t get_offset_of_initialPos_5() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___initialPos_5)); }
	inline Vector3_t4282066566  get_initialPos_5() const { return ___initialPos_5; }
	inline Vector3_t4282066566 * get_address_of_initialPos_5() { return &___initialPos_5; }
	inline void set_initialPos_5(Vector3_t4282066566  value)
	{
		___initialPos_5 = value;
	}

	inline static int32_t get_offset_of_playerVelocity_6() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___playerVelocity_6)); }
	inline Vector3_t4282066566  get_playerVelocity_6() const { return ___playerVelocity_6; }
	inline Vector3_t4282066566 * get_address_of_playerVelocity_6() { return &___playerVelocity_6; }
	inline void set_playerVelocity_6(Vector3_t4282066566  value)
	{
		___playerVelocity_6 = value;
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___canvas_7)); }
	inline GameObject_t3674682005 * get_canvas_7() const { return ___canvas_7; }
	inline GameObject_t3674682005 ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(GameObject_t3674682005 * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_7, value);
	}

	inline static int32_t get_offset_of_StoreTrigger_8() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___StoreTrigger_8)); }
	inline StoreTrigger_t141408695 * get_StoreTrigger_8() const { return ___StoreTrigger_8; }
	inline StoreTrigger_t141408695 ** get_address_of_StoreTrigger_8() { return &___StoreTrigger_8; }
	inline void set_StoreTrigger_8(StoreTrigger_t141408695 * value)
	{
		___StoreTrigger_8 = value;
		Il2CppCodeGenWriteBarrier(&___StoreTrigger_8, value);
	}

	inline static int32_t get_offset_of_FloorCanvas_9() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___FloorCanvas_9)); }
	inline GameObject_t3674682005 * get_FloorCanvas_9() const { return ___FloorCanvas_9; }
	inline GameObject_t3674682005 ** get_address_of_FloorCanvas_9() { return &___FloorCanvas_9; }
	inline void set_FloorCanvas_9(GameObject_t3674682005 * value)
	{
		___FloorCanvas_9 = value;
		Il2CppCodeGenWriteBarrier(&___FloorCanvas_9, value);
	}

	inline static int32_t get_offset_of_trail_10() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___trail_10)); }
	inline TrailRenderer_t2401074527 * get_trail_10() const { return ___trail_10; }
	inline TrailRenderer_t2401074527 ** get_address_of_trail_10() { return &___trail_10; }
	inline void set_trail_10(TrailRenderer_t2401074527 * value)
	{
		___trail_10 = value;
		Il2CppCodeGenWriteBarrier(&___trail_10, value);
	}

	inline static int32_t get_offset_of_startWidth_11() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___startWidth_11)); }
	inline float get_startWidth_11() const { return ___startWidth_11; }
	inline float* get_address_of_startWidth_11() { return &___startWidth_11; }
	inline void set_startWidth_11(float value)
	{
		___startWidth_11 = value;
	}

	inline static int32_t get_offset_of_platforms_12() { return static_cast<int32_t>(offsetof(DeathCube_t890015913, ___platforms_12)); }
	inline Platforms_t4284597824 * get_platforms_12() const { return ___platforms_12; }
	inline Platforms_t4284597824 ** get_address_of_platforms_12() { return &___platforms_12; }
	inline void set_platforms_12(Platforms_t4284597824 * value)
	{
		___platforms_12 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
