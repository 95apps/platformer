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
// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// Platforms
struct Platforms_t4284597824;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// Clouds
struct Clouds_t2021315838;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod3736167958.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t1939328147  : public MonoBehaviour_t667441552
{
public:
	// System.Single Platform::countDown
	float ___countDown_2;
	// System.Single Platform::initialCountDown
	float ___initialCountDown_3;
	// System.Single Platform::audioPitch
	float ___audioPitch_4;
	// System.Single Platform::trafficTimer
	float ___trafficTimer_5;
	// System.Int32 Platform::direction
	int32_t ___direction_6;
	// System.Int32 Platform::platsSpawned
	int32_t ___platsSpawned_7;
	// System.Int32 Platform::platsPlaced
	int32_t ___platsPlaced_8;
	// System.Int32 Platform::colorCounter
	int32_t ___colorCounter_9;
	// UnityEngine.GameObject Platform::FloorCanvas
	GameObject_t3674682005 * ___FloorCanvas_10;
	// UnityEngine.Renderer Platform::platRender
	Renderer_t3076687687 * ___platRender_11;
	// UnityEngine.Rigidbody Platform::rb
	Rigidbody_t3346577219 * ___rb_12;
	// System.Boolean Platform::playSound
	bool ___playSound_13;
	// System.Boolean Platform::startMoving
	bool ___startMoving_14;
	// System.Boolean Platform::setIndicatorPosition
	bool ___setIndicatorPosition_15;
	// System.Boolean Platform::highScorePlaying
	bool ___highScorePlaying_16;
	// System.Boolean Platform::trafficLight
	bool ___trafficLight_17;
	// System.Boolean Platform::trafficDestroy
	bool ___trafficDestroy_18;
	// UnityEngine.AudioSource Platform::src
	AudioSource_t1740077639 * ___src_19;
	// UnityEngine.ParticleSystem Platform::ps
	ParticleSystem_t381473177 * ___ps_20;
	// UnityEngine.Vector3 Platform::xPos1
	Vector3_t4282066566  ___xPos1_21;
	// UnityEngine.Vector3 Platform::xPos2
	Vector3_t4282066566  ___xPos2_22;
	// UnityEngine.Vector3 Platform::yPos1
	Vector3_t4282066566  ___yPos1_23;
	// UnityEngine.Vector3 Platform::yPos2
	Vector3_t4282066566  ___yPos2_24;
	// UnityEngine.Vector3 Platform::zPos1
	Vector3_t4282066566  ___zPos1_25;
	// UnityEngine.Vector3 Platform::zPos2
	Vector3_t4282066566  ___zPos2_26;
	// UnityEngine.Vector3 Platform::boxColDimensions
	Vector3_t4282066566  ___boxColDimensions_27;
	// System.Boolean Platform::startDisappear
	bool ___startDisappear_28;
	// Platforms Platform::platforms
	Platforms_t4284597824 * ___platforms_29;
	// System.Int32 Platform::consecutivePlaced
	int32_t ___consecutivePlaced_30;
	// UnityEngine.GameObject Platform::scoreText
	GameObject_t3674682005 * ___scoreText_31;
	// UnityEngine.GameObject Platform::leftIndicator
	GameObject_t3674682005 * ___leftIndicator_32;
	// UnityEngine.GameObject Platform::rightIndicator
	GameObject_t3674682005 * ___rightIndicator_33;
	// UnityEngine.AudioClip[] Platform::fallSounds
	AudioClipU5BU5D_t3001083477* ___fallSounds_34;
	// UnityEngine.Renderer Platform::top
	Renderer_t3076687687 * ___top_35;
	// UnityEngine.Renderer Platform::bot
	Renderer_t3076687687 * ___bot_36;
	// UnityEngine.ParticleSystem/EmissionModule Platform::em
	EmissionModule_t3736167958  ___em_37;
	// System.Single Platform::highscore
	float ___highscore_38;
	// Clouds Platform::clouds
	Clouds_t2021315838 * ___clouds_39;
	// UnityEngine.GameObject Platform::swiper
	GameObject_t3674682005 * ___swiper_40;
	// UnityEngine.GameObject Platform::bulletsGroup
	GameObject_t3674682005 * ___bulletsGroup_41;
	// UnityEngine.GameObject Platform::coin
	GameObject_t3674682005 * ___coin_42;
	// UnityEngine.Color32[] Platform::trafficColors
	Color32U5BU5D_t2960766953* ___trafficColors_43;
	// UnityEngine.Color32 Platform::fallColor
	Color32_t598853688  ___fallColor_44;
	// Player Platform::player
	Player_t2393081601 * ___player_45;
	// UnityEngine.GameObject Platform::arrows
	GameObject_t3674682005 * ___arrows_46;
	// System.Single Platform::bobStep
	float ___bobStep_47;
	// System.Boolean Platform::toBob
	bool ___toBob_48;

public:
	inline static int32_t get_offset_of_countDown_2() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___countDown_2)); }
	inline float get_countDown_2() const { return ___countDown_2; }
	inline float* get_address_of_countDown_2() { return &___countDown_2; }
	inline void set_countDown_2(float value)
	{
		___countDown_2 = value;
	}

	inline static int32_t get_offset_of_initialCountDown_3() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___initialCountDown_3)); }
	inline float get_initialCountDown_3() const { return ___initialCountDown_3; }
	inline float* get_address_of_initialCountDown_3() { return &___initialCountDown_3; }
	inline void set_initialCountDown_3(float value)
	{
		___initialCountDown_3 = value;
	}

	inline static int32_t get_offset_of_audioPitch_4() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___audioPitch_4)); }
	inline float get_audioPitch_4() const { return ___audioPitch_4; }
	inline float* get_address_of_audioPitch_4() { return &___audioPitch_4; }
	inline void set_audioPitch_4(float value)
	{
		___audioPitch_4 = value;
	}

	inline static int32_t get_offset_of_trafficTimer_5() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___trafficTimer_5)); }
	inline float get_trafficTimer_5() const { return ___trafficTimer_5; }
	inline float* get_address_of_trafficTimer_5() { return &___trafficTimer_5; }
	inline void set_trafficTimer_5(float value)
	{
		___trafficTimer_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___direction_6)); }
	inline int32_t get_direction_6() const { return ___direction_6; }
	inline int32_t* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(int32_t value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_platsSpawned_7() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___platsSpawned_7)); }
	inline int32_t get_platsSpawned_7() const { return ___platsSpawned_7; }
	inline int32_t* get_address_of_platsSpawned_7() { return &___platsSpawned_7; }
	inline void set_platsSpawned_7(int32_t value)
	{
		___platsSpawned_7 = value;
	}

	inline static int32_t get_offset_of_platsPlaced_8() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___platsPlaced_8)); }
	inline int32_t get_platsPlaced_8() const { return ___platsPlaced_8; }
	inline int32_t* get_address_of_platsPlaced_8() { return &___platsPlaced_8; }
	inline void set_platsPlaced_8(int32_t value)
	{
		___platsPlaced_8 = value;
	}

	inline static int32_t get_offset_of_colorCounter_9() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___colorCounter_9)); }
	inline int32_t get_colorCounter_9() const { return ___colorCounter_9; }
	inline int32_t* get_address_of_colorCounter_9() { return &___colorCounter_9; }
	inline void set_colorCounter_9(int32_t value)
	{
		___colorCounter_9 = value;
	}

	inline static int32_t get_offset_of_FloorCanvas_10() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___FloorCanvas_10)); }
	inline GameObject_t3674682005 * get_FloorCanvas_10() const { return ___FloorCanvas_10; }
	inline GameObject_t3674682005 ** get_address_of_FloorCanvas_10() { return &___FloorCanvas_10; }
	inline void set_FloorCanvas_10(GameObject_t3674682005 * value)
	{
		___FloorCanvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___FloorCanvas_10, value);
	}

	inline static int32_t get_offset_of_platRender_11() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___platRender_11)); }
	inline Renderer_t3076687687 * get_platRender_11() const { return ___platRender_11; }
	inline Renderer_t3076687687 ** get_address_of_platRender_11() { return &___platRender_11; }
	inline void set_platRender_11(Renderer_t3076687687 * value)
	{
		___platRender_11 = value;
		Il2CppCodeGenWriteBarrier(&___platRender_11, value);
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___rb_12)); }
	inline Rigidbody_t3346577219 * get_rb_12() const { return ___rb_12; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody_t3346577219 * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier(&___rb_12, value);
	}

	inline static int32_t get_offset_of_playSound_13() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___playSound_13)); }
	inline bool get_playSound_13() const { return ___playSound_13; }
	inline bool* get_address_of_playSound_13() { return &___playSound_13; }
	inline void set_playSound_13(bool value)
	{
		___playSound_13 = value;
	}

	inline static int32_t get_offset_of_startMoving_14() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___startMoving_14)); }
	inline bool get_startMoving_14() const { return ___startMoving_14; }
	inline bool* get_address_of_startMoving_14() { return &___startMoving_14; }
	inline void set_startMoving_14(bool value)
	{
		___startMoving_14 = value;
	}

	inline static int32_t get_offset_of_setIndicatorPosition_15() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___setIndicatorPosition_15)); }
	inline bool get_setIndicatorPosition_15() const { return ___setIndicatorPosition_15; }
	inline bool* get_address_of_setIndicatorPosition_15() { return &___setIndicatorPosition_15; }
	inline void set_setIndicatorPosition_15(bool value)
	{
		___setIndicatorPosition_15 = value;
	}

	inline static int32_t get_offset_of_highScorePlaying_16() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___highScorePlaying_16)); }
	inline bool get_highScorePlaying_16() const { return ___highScorePlaying_16; }
	inline bool* get_address_of_highScorePlaying_16() { return &___highScorePlaying_16; }
	inline void set_highScorePlaying_16(bool value)
	{
		___highScorePlaying_16 = value;
	}

	inline static int32_t get_offset_of_trafficLight_17() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___trafficLight_17)); }
	inline bool get_trafficLight_17() const { return ___trafficLight_17; }
	inline bool* get_address_of_trafficLight_17() { return &___trafficLight_17; }
	inline void set_trafficLight_17(bool value)
	{
		___trafficLight_17 = value;
	}

	inline static int32_t get_offset_of_trafficDestroy_18() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___trafficDestroy_18)); }
	inline bool get_trafficDestroy_18() const { return ___trafficDestroy_18; }
	inline bool* get_address_of_trafficDestroy_18() { return &___trafficDestroy_18; }
	inline void set_trafficDestroy_18(bool value)
	{
		___trafficDestroy_18 = value;
	}

	inline static int32_t get_offset_of_src_19() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___src_19)); }
	inline AudioSource_t1740077639 * get_src_19() const { return ___src_19; }
	inline AudioSource_t1740077639 ** get_address_of_src_19() { return &___src_19; }
	inline void set_src_19(AudioSource_t1740077639 * value)
	{
		___src_19 = value;
		Il2CppCodeGenWriteBarrier(&___src_19, value);
	}

	inline static int32_t get_offset_of_ps_20() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___ps_20)); }
	inline ParticleSystem_t381473177 * get_ps_20() const { return ___ps_20; }
	inline ParticleSystem_t381473177 ** get_address_of_ps_20() { return &___ps_20; }
	inline void set_ps_20(ParticleSystem_t381473177 * value)
	{
		___ps_20 = value;
		Il2CppCodeGenWriteBarrier(&___ps_20, value);
	}

	inline static int32_t get_offset_of_xPos1_21() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___xPos1_21)); }
	inline Vector3_t4282066566  get_xPos1_21() const { return ___xPos1_21; }
	inline Vector3_t4282066566 * get_address_of_xPos1_21() { return &___xPos1_21; }
	inline void set_xPos1_21(Vector3_t4282066566  value)
	{
		___xPos1_21 = value;
	}

	inline static int32_t get_offset_of_xPos2_22() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___xPos2_22)); }
	inline Vector3_t4282066566  get_xPos2_22() const { return ___xPos2_22; }
	inline Vector3_t4282066566 * get_address_of_xPos2_22() { return &___xPos2_22; }
	inline void set_xPos2_22(Vector3_t4282066566  value)
	{
		___xPos2_22 = value;
	}

	inline static int32_t get_offset_of_yPos1_23() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___yPos1_23)); }
	inline Vector3_t4282066566  get_yPos1_23() const { return ___yPos1_23; }
	inline Vector3_t4282066566 * get_address_of_yPos1_23() { return &___yPos1_23; }
	inline void set_yPos1_23(Vector3_t4282066566  value)
	{
		___yPos1_23 = value;
	}

	inline static int32_t get_offset_of_yPos2_24() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___yPos2_24)); }
	inline Vector3_t4282066566  get_yPos2_24() const { return ___yPos2_24; }
	inline Vector3_t4282066566 * get_address_of_yPos2_24() { return &___yPos2_24; }
	inline void set_yPos2_24(Vector3_t4282066566  value)
	{
		___yPos2_24 = value;
	}

	inline static int32_t get_offset_of_zPos1_25() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___zPos1_25)); }
	inline Vector3_t4282066566  get_zPos1_25() const { return ___zPos1_25; }
	inline Vector3_t4282066566 * get_address_of_zPos1_25() { return &___zPos1_25; }
	inline void set_zPos1_25(Vector3_t4282066566  value)
	{
		___zPos1_25 = value;
	}

	inline static int32_t get_offset_of_zPos2_26() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___zPos2_26)); }
	inline Vector3_t4282066566  get_zPos2_26() const { return ___zPos2_26; }
	inline Vector3_t4282066566 * get_address_of_zPos2_26() { return &___zPos2_26; }
	inline void set_zPos2_26(Vector3_t4282066566  value)
	{
		___zPos2_26 = value;
	}

	inline static int32_t get_offset_of_boxColDimensions_27() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___boxColDimensions_27)); }
	inline Vector3_t4282066566  get_boxColDimensions_27() const { return ___boxColDimensions_27; }
	inline Vector3_t4282066566 * get_address_of_boxColDimensions_27() { return &___boxColDimensions_27; }
	inline void set_boxColDimensions_27(Vector3_t4282066566  value)
	{
		___boxColDimensions_27 = value;
	}

	inline static int32_t get_offset_of_startDisappear_28() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___startDisappear_28)); }
	inline bool get_startDisappear_28() const { return ___startDisappear_28; }
	inline bool* get_address_of_startDisappear_28() { return &___startDisappear_28; }
	inline void set_startDisappear_28(bool value)
	{
		___startDisappear_28 = value;
	}

	inline static int32_t get_offset_of_platforms_29() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___platforms_29)); }
	inline Platforms_t4284597824 * get_platforms_29() const { return ___platforms_29; }
	inline Platforms_t4284597824 ** get_address_of_platforms_29() { return &___platforms_29; }
	inline void set_platforms_29(Platforms_t4284597824 * value)
	{
		___platforms_29 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_29, value);
	}

	inline static int32_t get_offset_of_consecutivePlaced_30() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___consecutivePlaced_30)); }
	inline int32_t get_consecutivePlaced_30() const { return ___consecutivePlaced_30; }
	inline int32_t* get_address_of_consecutivePlaced_30() { return &___consecutivePlaced_30; }
	inline void set_consecutivePlaced_30(int32_t value)
	{
		___consecutivePlaced_30 = value;
	}

	inline static int32_t get_offset_of_scoreText_31() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___scoreText_31)); }
	inline GameObject_t3674682005 * get_scoreText_31() const { return ___scoreText_31; }
	inline GameObject_t3674682005 ** get_address_of_scoreText_31() { return &___scoreText_31; }
	inline void set_scoreText_31(GameObject_t3674682005 * value)
	{
		___scoreText_31 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_31, value);
	}

	inline static int32_t get_offset_of_leftIndicator_32() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___leftIndicator_32)); }
	inline GameObject_t3674682005 * get_leftIndicator_32() const { return ___leftIndicator_32; }
	inline GameObject_t3674682005 ** get_address_of_leftIndicator_32() { return &___leftIndicator_32; }
	inline void set_leftIndicator_32(GameObject_t3674682005 * value)
	{
		___leftIndicator_32 = value;
		Il2CppCodeGenWriteBarrier(&___leftIndicator_32, value);
	}

	inline static int32_t get_offset_of_rightIndicator_33() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___rightIndicator_33)); }
	inline GameObject_t3674682005 * get_rightIndicator_33() const { return ___rightIndicator_33; }
	inline GameObject_t3674682005 ** get_address_of_rightIndicator_33() { return &___rightIndicator_33; }
	inline void set_rightIndicator_33(GameObject_t3674682005 * value)
	{
		___rightIndicator_33 = value;
		Il2CppCodeGenWriteBarrier(&___rightIndicator_33, value);
	}

	inline static int32_t get_offset_of_fallSounds_34() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___fallSounds_34)); }
	inline AudioClipU5BU5D_t3001083477* get_fallSounds_34() const { return ___fallSounds_34; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_fallSounds_34() { return &___fallSounds_34; }
	inline void set_fallSounds_34(AudioClipU5BU5D_t3001083477* value)
	{
		___fallSounds_34 = value;
		Il2CppCodeGenWriteBarrier(&___fallSounds_34, value);
	}

	inline static int32_t get_offset_of_top_35() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___top_35)); }
	inline Renderer_t3076687687 * get_top_35() const { return ___top_35; }
	inline Renderer_t3076687687 ** get_address_of_top_35() { return &___top_35; }
	inline void set_top_35(Renderer_t3076687687 * value)
	{
		___top_35 = value;
		Il2CppCodeGenWriteBarrier(&___top_35, value);
	}

	inline static int32_t get_offset_of_bot_36() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___bot_36)); }
	inline Renderer_t3076687687 * get_bot_36() const { return ___bot_36; }
	inline Renderer_t3076687687 ** get_address_of_bot_36() { return &___bot_36; }
	inline void set_bot_36(Renderer_t3076687687 * value)
	{
		___bot_36 = value;
		Il2CppCodeGenWriteBarrier(&___bot_36, value);
	}

	inline static int32_t get_offset_of_em_37() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___em_37)); }
	inline EmissionModule_t3736167958  get_em_37() const { return ___em_37; }
	inline EmissionModule_t3736167958 * get_address_of_em_37() { return &___em_37; }
	inline void set_em_37(EmissionModule_t3736167958  value)
	{
		___em_37 = value;
	}

	inline static int32_t get_offset_of_highscore_38() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___highscore_38)); }
	inline float get_highscore_38() const { return ___highscore_38; }
	inline float* get_address_of_highscore_38() { return &___highscore_38; }
	inline void set_highscore_38(float value)
	{
		___highscore_38 = value;
	}

	inline static int32_t get_offset_of_clouds_39() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___clouds_39)); }
	inline Clouds_t2021315838 * get_clouds_39() const { return ___clouds_39; }
	inline Clouds_t2021315838 ** get_address_of_clouds_39() { return &___clouds_39; }
	inline void set_clouds_39(Clouds_t2021315838 * value)
	{
		___clouds_39 = value;
		Il2CppCodeGenWriteBarrier(&___clouds_39, value);
	}

	inline static int32_t get_offset_of_swiper_40() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___swiper_40)); }
	inline GameObject_t3674682005 * get_swiper_40() const { return ___swiper_40; }
	inline GameObject_t3674682005 ** get_address_of_swiper_40() { return &___swiper_40; }
	inline void set_swiper_40(GameObject_t3674682005 * value)
	{
		___swiper_40 = value;
		Il2CppCodeGenWriteBarrier(&___swiper_40, value);
	}

	inline static int32_t get_offset_of_bulletsGroup_41() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___bulletsGroup_41)); }
	inline GameObject_t3674682005 * get_bulletsGroup_41() const { return ___bulletsGroup_41; }
	inline GameObject_t3674682005 ** get_address_of_bulletsGroup_41() { return &___bulletsGroup_41; }
	inline void set_bulletsGroup_41(GameObject_t3674682005 * value)
	{
		___bulletsGroup_41 = value;
		Il2CppCodeGenWriteBarrier(&___bulletsGroup_41, value);
	}

	inline static int32_t get_offset_of_coin_42() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___coin_42)); }
	inline GameObject_t3674682005 * get_coin_42() const { return ___coin_42; }
	inline GameObject_t3674682005 ** get_address_of_coin_42() { return &___coin_42; }
	inline void set_coin_42(GameObject_t3674682005 * value)
	{
		___coin_42 = value;
		Il2CppCodeGenWriteBarrier(&___coin_42, value);
	}

	inline static int32_t get_offset_of_trafficColors_43() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___trafficColors_43)); }
	inline Color32U5BU5D_t2960766953* get_trafficColors_43() const { return ___trafficColors_43; }
	inline Color32U5BU5D_t2960766953** get_address_of_trafficColors_43() { return &___trafficColors_43; }
	inline void set_trafficColors_43(Color32U5BU5D_t2960766953* value)
	{
		___trafficColors_43 = value;
		Il2CppCodeGenWriteBarrier(&___trafficColors_43, value);
	}

	inline static int32_t get_offset_of_fallColor_44() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___fallColor_44)); }
	inline Color32_t598853688  get_fallColor_44() const { return ___fallColor_44; }
	inline Color32_t598853688 * get_address_of_fallColor_44() { return &___fallColor_44; }
	inline void set_fallColor_44(Color32_t598853688  value)
	{
		___fallColor_44 = value;
	}

	inline static int32_t get_offset_of_player_45() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___player_45)); }
	inline Player_t2393081601 * get_player_45() const { return ___player_45; }
	inline Player_t2393081601 ** get_address_of_player_45() { return &___player_45; }
	inline void set_player_45(Player_t2393081601 * value)
	{
		___player_45 = value;
		Il2CppCodeGenWriteBarrier(&___player_45, value);
	}

	inline static int32_t get_offset_of_arrows_46() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___arrows_46)); }
	inline GameObject_t3674682005 * get_arrows_46() const { return ___arrows_46; }
	inline GameObject_t3674682005 ** get_address_of_arrows_46() { return &___arrows_46; }
	inline void set_arrows_46(GameObject_t3674682005 * value)
	{
		___arrows_46 = value;
		Il2CppCodeGenWriteBarrier(&___arrows_46, value);
	}

	inline static int32_t get_offset_of_bobStep_47() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___bobStep_47)); }
	inline float get_bobStep_47() const { return ___bobStep_47; }
	inline float* get_address_of_bobStep_47() { return &___bobStep_47; }
	inline void set_bobStep_47(float value)
	{
		___bobStep_47 = value;
	}

	inline static int32_t get_offset_of_toBob_48() { return static_cast<int32_t>(offsetof(Platform_t1939328147, ___toBob_48)); }
	inline bool get_toBob_48() const { return ___toBob_48; }
	inline bool* get_address_of_toBob_48() { return &___toBob_48; }
	inline void set_toBob_48(bool value)
	{
		___toBob_48 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
