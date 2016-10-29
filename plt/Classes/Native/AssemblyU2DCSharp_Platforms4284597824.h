#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// Clouds
struct Clouds_t2021315838;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platforms
struct  Platforms_t4284597824  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Platforms::platforms
	List_1_t747900261 * ___platforms_2;
	// System.Single Platforms::countDown
	float ___countDown_3;
	// System.Single Platforms::rotationAngleMultiplier
	float ___rotationAngleMultiplier_4;
	// System.Single Platforms::platSpeed
	float ___platSpeed_5;
	// System.Single Platforms::pitch
	float ___pitch_6;
	// System.Int32 Platforms::direction
	int32_t ___direction_7;
	// System.Int32 Platforms::consecutiveJumped
	int32_t ___consecutiveJumped_8;
	// System.Int32 Platforms::consecutivePlaced
	int32_t ___consecutivePlaced_9;
	// System.Int32 Platforms::consecutiveSpawned
	int32_t ___consecutiveSpawned_10;
	// System.Int32 Platforms::score
	int32_t ___score_11;
	// Clouds Platforms::clouds
	Clouds_t2021315838 * ___clouds_12;
	// UnityEngine.Material[] Platforms::mats
	MaterialU5BU5D_t170856778* ___mats_13;
	// Player Platforms::player
	Player_t2393081601 * ___player_14;
	// System.Int32 Platforms::swiperCounter
	int32_t ___swiperCounter_15;

public:
	inline static int32_t get_offset_of_platforms_2() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___platforms_2)); }
	inline List_1_t747900261 * get_platforms_2() const { return ___platforms_2; }
	inline List_1_t747900261 ** get_address_of_platforms_2() { return &___platforms_2; }
	inline void set_platforms_2(List_1_t747900261 * value)
	{
		___platforms_2 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_2, value);
	}

	inline static int32_t get_offset_of_countDown_3() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___countDown_3)); }
	inline float get_countDown_3() const { return ___countDown_3; }
	inline float* get_address_of_countDown_3() { return &___countDown_3; }
	inline void set_countDown_3(float value)
	{
		___countDown_3 = value;
	}

	inline static int32_t get_offset_of_rotationAngleMultiplier_4() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___rotationAngleMultiplier_4)); }
	inline float get_rotationAngleMultiplier_4() const { return ___rotationAngleMultiplier_4; }
	inline float* get_address_of_rotationAngleMultiplier_4() { return &___rotationAngleMultiplier_4; }
	inline void set_rotationAngleMultiplier_4(float value)
	{
		___rotationAngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_platSpeed_5() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___platSpeed_5)); }
	inline float get_platSpeed_5() const { return ___platSpeed_5; }
	inline float* get_address_of_platSpeed_5() { return &___platSpeed_5; }
	inline void set_platSpeed_5(float value)
	{
		___platSpeed_5 = value;
	}

	inline static int32_t get_offset_of_pitch_6() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___pitch_6)); }
	inline float get_pitch_6() const { return ___pitch_6; }
	inline float* get_address_of_pitch_6() { return &___pitch_6; }
	inline void set_pitch_6(float value)
	{
		___pitch_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___direction_7)); }
	inline int32_t get_direction_7() const { return ___direction_7; }
	inline int32_t* get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(int32_t value)
	{
		___direction_7 = value;
	}

	inline static int32_t get_offset_of_consecutiveJumped_8() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___consecutiveJumped_8)); }
	inline int32_t get_consecutiveJumped_8() const { return ___consecutiveJumped_8; }
	inline int32_t* get_address_of_consecutiveJumped_8() { return &___consecutiveJumped_8; }
	inline void set_consecutiveJumped_8(int32_t value)
	{
		___consecutiveJumped_8 = value;
	}

	inline static int32_t get_offset_of_consecutivePlaced_9() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___consecutivePlaced_9)); }
	inline int32_t get_consecutivePlaced_9() const { return ___consecutivePlaced_9; }
	inline int32_t* get_address_of_consecutivePlaced_9() { return &___consecutivePlaced_9; }
	inline void set_consecutivePlaced_9(int32_t value)
	{
		___consecutivePlaced_9 = value;
	}

	inline static int32_t get_offset_of_consecutiveSpawned_10() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___consecutiveSpawned_10)); }
	inline int32_t get_consecutiveSpawned_10() const { return ___consecutiveSpawned_10; }
	inline int32_t* get_address_of_consecutiveSpawned_10() { return &___consecutiveSpawned_10; }
	inline void set_consecutiveSpawned_10(int32_t value)
	{
		___consecutiveSpawned_10 = value;
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_clouds_12() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___clouds_12)); }
	inline Clouds_t2021315838 * get_clouds_12() const { return ___clouds_12; }
	inline Clouds_t2021315838 ** get_address_of_clouds_12() { return &___clouds_12; }
	inline void set_clouds_12(Clouds_t2021315838 * value)
	{
		___clouds_12 = value;
		Il2CppCodeGenWriteBarrier(&___clouds_12, value);
	}

	inline static int32_t get_offset_of_mats_13() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___mats_13)); }
	inline MaterialU5BU5D_t170856778* get_mats_13() const { return ___mats_13; }
	inline MaterialU5BU5D_t170856778** get_address_of_mats_13() { return &___mats_13; }
	inline void set_mats_13(MaterialU5BU5D_t170856778* value)
	{
		___mats_13 = value;
		Il2CppCodeGenWriteBarrier(&___mats_13, value);
	}

	inline static int32_t get_offset_of_player_14() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___player_14)); }
	inline Player_t2393081601 * get_player_14() const { return ___player_14; }
	inline Player_t2393081601 ** get_address_of_player_14() { return &___player_14; }
	inline void set_player_14(Player_t2393081601 * value)
	{
		___player_14 = value;
		Il2CppCodeGenWriteBarrier(&___player_14, value);
	}

	inline static int32_t get_offset_of_swiperCounter_15() { return static_cast<int32_t>(offsetof(Platforms_t4284597824, ___swiperCounter_15)); }
	inline int32_t get_swiperCounter_15() const { return ___swiperCounter_15; }
	inline int32_t* get_address_of_swiperCounter_15() { return &___swiperCounter_15; }
	inline void set_swiperCounter_15(int32_t value)
	{
		___swiperCounter_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
