#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t318617463;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Coin
struct  Coin_t2106033  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Coin::coinsCollected
	int32_t ___coinsCollected_2;
	// UnityEngine.AudioSource Coin::src
	AudioSource_t1740077639 * ___src_3;
	// UnityEngine.AudioClip Coin::coinSound
	AudioClip_t794140988 * ___coinSound_4;
	// UnityEngine.CapsuleCollider Coin::myCollider
	CapsuleCollider_t318617463 * ___myCollider_5;
	// UnityEngine.MeshRenderer Coin::myMesh
	MeshRenderer_t2804666580 * ___myMesh_6;
	// UnityEngine.CapsuleCollider Coin::myCollider2
	CapsuleCollider_t318617463 * ___myCollider2_7;
	// UnityEngine.MeshRenderer Coin::myMesh2
	MeshRenderer_t2804666580 * ___myMesh2_8;
	// System.Boolean Coin::startTimer
	bool ___startTimer_9;
	// System.Int32 Coin::randomSpin
	int32_t ___randomSpin_10;

public:
	inline static int32_t get_offset_of_coinsCollected_2() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___coinsCollected_2)); }
	inline int32_t get_coinsCollected_2() const { return ___coinsCollected_2; }
	inline int32_t* get_address_of_coinsCollected_2() { return &___coinsCollected_2; }
	inline void set_coinsCollected_2(int32_t value)
	{
		___coinsCollected_2 = value;
	}

	inline static int32_t get_offset_of_src_3() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___src_3)); }
	inline AudioSource_t1740077639 * get_src_3() const { return ___src_3; }
	inline AudioSource_t1740077639 ** get_address_of_src_3() { return &___src_3; }
	inline void set_src_3(AudioSource_t1740077639 * value)
	{
		___src_3 = value;
		Il2CppCodeGenWriteBarrier(&___src_3, value);
	}

	inline static int32_t get_offset_of_coinSound_4() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___coinSound_4)); }
	inline AudioClip_t794140988 * get_coinSound_4() const { return ___coinSound_4; }
	inline AudioClip_t794140988 ** get_address_of_coinSound_4() { return &___coinSound_4; }
	inline void set_coinSound_4(AudioClip_t794140988 * value)
	{
		___coinSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___coinSound_4, value);
	}

	inline static int32_t get_offset_of_myCollider_5() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___myCollider_5)); }
	inline CapsuleCollider_t318617463 * get_myCollider_5() const { return ___myCollider_5; }
	inline CapsuleCollider_t318617463 ** get_address_of_myCollider_5() { return &___myCollider_5; }
	inline void set_myCollider_5(CapsuleCollider_t318617463 * value)
	{
		___myCollider_5 = value;
		Il2CppCodeGenWriteBarrier(&___myCollider_5, value);
	}

	inline static int32_t get_offset_of_myMesh_6() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___myMesh_6)); }
	inline MeshRenderer_t2804666580 * get_myMesh_6() const { return ___myMesh_6; }
	inline MeshRenderer_t2804666580 ** get_address_of_myMesh_6() { return &___myMesh_6; }
	inline void set_myMesh_6(MeshRenderer_t2804666580 * value)
	{
		___myMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___myMesh_6, value);
	}

	inline static int32_t get_offset_of_myCollider2_7() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___myCollider2_7)); }
	inline CapsuleCollider_t318617463 * get_myCollider2_7() const { return ___myCollider2_7; }
	inline CapsuleCollider_t318617463 ** get_address_of_myCollider2_7() { return &___myCollider2_7; }
	inline void set_myCollider2_7(CapsuleCollider_t318617463 * value)
	{
		___myCollider2_7 = value;
		Il2CppCodeGenWriteBarrier(&___myCollider2_7, value);
	}

	inline static int32_t get_offset_of_myMesh2_8() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___myMesh2_8)); }
	inline MeshRenderer_t2804666580 * get_myMesh2_8() const { return ___myMesh2_8; }
	inline MeshRenderer_t2804666580 ** get_address_of_myMesh2_8() { return &___myMesh2_8; }
	inline void set_myMesh2_8(MeshRenderer_t2804666580 * value)
	{
		___myMesh2_8 = value;
		Il2CppCodeGenWriteBarrier(&___myMesh2_8, value);
	}

	inline static int32_t get_offset_of_startTimer_9() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___startTimer_9)); }
	inline bool get_startTimer_9() const { return ___startTimer_9; }
	inline bool* get_address_of_startTimer_9() { return &___startTimer_9; }
	inline void set_startTimer_9(bool value)
	{
		___startTimer_9 = value;
	}

	inline static int32_t get_offset_of_randomSpin_10() { return static_cast<int32_t>(offsetof(Coin_t2106033, ___randomSpin_10)); }
	inline int32_t get_randomSpin_10() const { return ___randomSpin_10; }
	inline int32_t* get_address_of_randomSpin_10() { return &___randomSpin_10; }
	inline void set_randomSpin_10(int32_t value)
	{
		___randomSpin_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
