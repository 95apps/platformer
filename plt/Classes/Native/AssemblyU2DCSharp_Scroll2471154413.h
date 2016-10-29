#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// BigScroll
struct BigScroll_t2968301517;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Selected
struct Selected_t1256216251;
// DisplayAmountOfCoins
struct DisplayAmountOfCoins_t1212874609;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Material
struct Material_t3870600107;
// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scroll
struct  Scroll_t2471154413  : public MonoBehaviour_t667441552
{
public:
	// System.Single Scroll::step
	float ___step_2;
	// System.Single Scroll::deltaX
	float ___deltaX_3;
	// UnityEngine.Vector3 Scroll::target
	Vector3_t4282066566  ___target_4;
	// UnityEngine.Vector3 Scroll::startPos
	Vector3_t4282066566  ___startPos_5;
	// UnityEngine.RectTransform Scroll::rectTransform
	RectTransform_t972643934 * ___rectTransform_6;
	// BigScroll Scroll::bigScroll
	BigScroll_t2968301517 * ___bigScroll_7;
	// System.Boolean Scroll::stop
	bool ___stop_8;
	// System.Boolean Scroll::toMove
	bool ___toMove_9;
	// UnityEngine.AudioSource Scroll::src
	AudioSource_t1740077639 * ___src_10;
	// UnityEngine.UI.RawImage Scroll::rawImage
	RawImage_t821930207 * ___rawImage_11;
	// UnityEngine.GameObject Scroll::big
	GameObject_t3674682005 * ___big_12;
	// Selected Scroll::selected
	Selected_t1256216251 * ___selected_13;
	// System.Int32 Scroll::value
	int32_t ___value_14;
	// System.Int32 Scroll::status
	int32_t ___status_15;
	// DisplayAmountOfCoins Scroll::displayAmountOfCoins
	DisplayAmountOfCoins_t1212874609 * ___displayAmountOfCoins_16;
	// UnityEngine.UI.Text Scroll::text
	Text_t9039225 * ___text_17;
	// UnityEngine.Mesh Scroll::playerModel
	Mesh_t4241756145 * ___playerModel_18;
	// UnityEngine.Vector3 Scroll::colDimensions
	Vector3_t4282066566  ___colDimensions_19;
	// UnityEngine.Vector3 Scroll::colPos
	Vector3_t4282066566  ___colPos_20;
	// UnityEngine.Vector3 Scroll::playerDimensions
	Vector3_t4282066566  ___playerDimensions_21;
	// UnityEngine.Vector3 Scroll::modelRotation
	Vector3_t4282066566  ___modelRotation_22;
	// UnityEngine.Material Scroll::modelMat
	Material_t3870600107 * ___modelMat_23;
	// Player Scroll::player
	Player_t2393081601 * ___player_24;
	// System.Boolean Scroll::isCube
	bool ___isCube_25;

public:
	inline static int32_t get_offset_of_step_2() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___step_2)); }
	inline float get_step_2() const { return ___step_2; }
	inline float* get_address_of_step_2() { return &___step_2; }
	inline void set_step_2(float value)
	{
		___step_2 = value;
	}

	inline static int32_t get_offset_of_deltaX_3() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___deltaX_3)); }
	inline float get_deltaX_3() const { return ___deltaX_3; }
	inline float* get_address_of_deltaX_3() { return &___deltaX_3; }
	inline void set_deltaX_3(float value)
	{
		___deltaX_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___target_4)); }
	inline Vector3_t4282066566  get_target_4() const { return ___target_4; }
	inline Vector3_t4282066566 * get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Vector3_t4282066566  value)
	{
		___target_4 = value;
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___startPos_5)); }
	inline Vector3_t4282066566  get_startPos_5() const { return ___startPos_5; }
	inline Vector3_t4282066566 * get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(Vector3_t4282066566  value)
	{
		___startPos_5 = value;
	}

	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___rectTransform_6)); }
	inline RectTransform_t972643934 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline RectTransform_t972643934 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(RectTransform_t972643934 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_6, value);
	}

	inline static int32_t get_offset_of_bigScroll_7() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___bigScroll_7)); }
	inline BigScroll_t2968301517 * get_bigScroll_7() const { return ___bigScroll_7; }
	inline BigScroll_t2968301517 ** get_address_of_bigScroll_7() { return &___bigScroll_7; }
	inline void set_bigScroll_7(BigScroll_t2968301517 * value)
	{
		___bigScroll_7 = value;
		Il2CppCodeGenWriteBarrier(&___bigScroll_7, value);
	}

	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___stop_8)); }
	inline bool get_stop_8() const { return ___stop_8; }
	inline bool* get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(bool value)
	{
		___stop_8 = value;
	}

	inline static int32_t get_offset_of_toMove_9() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___toMove_9)); }
	inline bool get_toMove_9() const { return ___toMove_9; }
	inline bool* get_address_of_toMove_9() { return &___toMove_9; }
	inline void set_toMove_9(bool value)
	{
		___toMove_9 = value;
	}

	inline static int32_t get_offset_of_src_10() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___src_10)); }
	inline AudioSource_t1740077639 * get_src_10() const { return ___src_10; }
	inline AudioSource_t1740077639 ** get_address_of_src_10() { return &___src_10; }
	inline void set_src_10(AudioSource_t1740077639 * value)
	{
		___src_10 = value;
		Il2CppCodeGenWriteBarrier(&___src_10, value);
	}

	inline static int32_t get_offset_of_rawImage_11() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___rawImage_11)); }
	inline RawImage_t821930207 * get_rawImage_11() const { return ___rawImage_11; }
	inline RawImage_t821930207 ** get_address_of_rawImage_11() { return &___rawImage_11; }
	inline void set_rawImage_11(RawImage_t821930207 * value)
	{
		___rawImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___rawImage_11, value);
	}

	inline static int32_t get_offset_of_big_12() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___big_12)); }
	inline GameObject_t3674682005 * get_big_12() const { return ___big_12; }
	inline GameObject_t3674682005 ** get_address_of_big_12() { return &___big_12; }
	inline void set_big_12(GameObject_t3674682005 * value)
	{
		___big_12 = value;
		Il2CppCodeGenWriteBarrier(&___big_12, value);
	}

	inline static int32_t get_offset_of_selected_13() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___selected_13)); }
	inline Selected_t1256216251 * get_selected_13() const { return ___selected_13; }
	inline Selected_t1256216251 ** get_address_of_selected_13() { return &___selected_13; }
	inline void set_selected_13(Selected_t1256216251 * value)
	{
		___selected_13 = value;
		Il2CppCodeGenWriteBarrier(&___selected_13, value);
	}

	inline static int32_t get_offset_of_value_14() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___value_14)); }
	inline int32_t get_value_14() const { return ___value_14; }
	inline int32_t* get_address_of_value_14() { return &___value_14; }
	inline void set_value_14(int32_t value)
	{
		___value_14 = value;
	}

	inline static int32_t get_offset_of_status_15() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___status_15)); }
	inline int32_t get_status_15() const { return ___status_15; }
	inline int32_t* get_address_of_status_15() { return &___status_15; }
	inline void set_status_15(int32_t value)
	{
		___status_15 = value;
	}

	inline static int32_t get_offset_of_displayAmountOfCoins_16() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___displayAmountOfCoins_16)); }
	inline DisplayAmountOfCoins_t1212874609 * get_displayAmountOfCoins_16() const { return ___displayAmountOfCoins_16; }
	inline DisplayAmountOfCoins_t1212874609 ** get_address_of_displayAmountOfCoins_16() { return &___displayAmountOfCoins_16; }
	inline void set_displayAmountOfCoins_16(DisplayAmountOfCoins_t1212874609 * value)
	{
		___displayAmountOfCoins_16 = value;
		Il2CppCodeGenWriteBarrier(&___displayAmountOfCoins_16, value);
	}

	inline static int32_t get_offset_of_text_17() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___text_17)); }
	inline Text_t9039225 * get_text_17() const { return ___text_17; }
	inline Text_t9039225 ** get_address_of_text_17() { return &___text_17; }
	inline void set_text_17(Text_t9039225 * value)
	{
		___text_17 = value;
		Il2CppCodeGenWriteBarrier(&___text_17, value);
	}

	inline static int32_t get_offset_of_playerModel_18() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___playerModel_18)); }
	inline Mesh_t4241756145 * get_playerModel_18() const { return ___playerModel_18; }
	inline Mesh_t4241756145 ** get_address_of_playerModel_18() { return &___playerModel_18; }
	inline void set_playerModel_18(Mesh_t4241756145 * value)
	{
		___playerModel_18 = value;
		Il2CppCodeGenWriteBarrier(&___playerModel_18, value);
	}

	inline static int32_t get_offset_of_colDimensions_19() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___colDimensions_19)); }
	inline Vector3_t4282066566  get_colDimensions_19() const { return ___colDimensions_19; }
	inline Vector3_t4282066566 * get_address_of_colDimensions_19() { return &___colDimensions_19; }
	inline void set_colDimensions_19(Vector3_t4282066566  value)
	{
		___colDimensions_19 = value;
	}

	inline static int32_t get_offset_of_colPos_20() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___colPos_20)); }
	inline Vector3_t4282066566  get_colPos_20() const { return ___colPos_20; }
	inline Vector3_t4282066566 * get_address_of_colPos_20() { return &___colPos_20; }
	inline void set_colPos_20(Vector3_t4282066566  value)
	{
		___colPos_20 = value;
	}

	inline static int32_t get_offset_of_playerDimensions_21() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___playerDimensions_21)); }
	inline Vector3_t4282066566  get_playerDimensions_21() const { return ___playerDimensions_21; }
	inline Vector3_t4282066566 * get_address_of_playerDimensions_21() { return &___playerDimensions_21; }
	inline void set_playerDimensions_21(Vector3_t4282066566  value)
	{
		___playerDimensions_21 = value;
	}

	inline static int32_t get_offset_of_modelRotation_22() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___modelRotation_22)); }
	inline Vector3_t4282066566  get_modelRotation_22() const { return ___modelRotation_22; }
	inline Vector3_t4282066566 * get_address_of_modelRotation_22() { return &___modelRotation_22; }
	inline void set_modelRotation_22(Vector3_t4282066566  value)
	{
		___modelRotation_22 = value;
	}

	inline static int32_t get_offset_of_modelMat_23() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___modelMat_23)); }
	inline Material_t3870600107 * get_modelMat_23() const { return ___modelMat_23; }
	inline Material_t3870600107 ** get_address_of_modelMat_23() { return &___modelMat_23; }
	inline void set_modelMat_23(Material_t3870600107 * value)
	{
		___modelMat_23 = value;
		Il2CppCodeGenWriteBarrier(&___modelMat_23, value);
	}

	inline static int32_t get_offset_of_player_24() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___player_24)); }
	inline Player_t2393081601 * get_player_24() const { return ___player_24; }
	inline Player_t2393081601 ** get_address_of_player_24() { return &___player_24; }
	inline void set_player_24(Player_t2393081601 * value)
	{
		___player_24 = value;
		Il2CppCodeGenWriteBarrier(&___player_24, value);
	}

	inline static int32_t get_offset_of_isCube_25() { return static_cast<int32_t>(offsetof(Scroll_t2471154413, ___isCube_25)); }
	inline bool get_isCube_25() const { return ___isCube_25; }
	inline bool* get_address_of_isCube_25() { return &___isCube_25; }
	inline void set_isCube_25(bool value)
	{
		___isCube_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
