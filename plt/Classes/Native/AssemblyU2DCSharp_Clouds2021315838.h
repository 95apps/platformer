#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// Platforms
struct Platforms_t4284597824;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Clouds
struct  Clouds_t2021315838  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] Clouds::clouds
	GameObjectU5BU5D_t2662109048* ___clouds_2;
	// System.Int32 Clouds::amountOfClouds
	int32_t ___amountOfClouds_3;
	// Platforms Clouds::platforms
	Platforms_t4284597824 * ___platforms_4;
	// UnityEngine.GameObject Clouds::player
	GameObject_t3674682005 * ___player_5;

public:
	inline static int32_t get_offset_of_clouds_2() { return static_cast<int32_t>(offsetof(Clouds_t2021315838, ___clouds_2)); }
	inline GameObjectU5BU5D_t2662109048* get_clouds_2() const { return ___clouds_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_clouds_2() { return &___clouds_2; }
	inline void set_clouds_2(GameObjectU5BU5D_t2662109048* value)
	{
		___clouds_2 = value;
		Il2CppCodeGenWriteBarrier(&___clouds_2, value);
	}

	inline static int32_t get_offset_of_amountOfClouds_3() { return static_cast<int32_t>(offsetof(Clouds_t2021315838, ___amountOfClouds_3)); }
	inline int32_t get_amountOfClouds_3() const { return ___amountOfClouds_3; }
	inline int32_t* get_address_of_amountOfClouds_3() { return &___amountOfClouds_3; }
	inline void set_amountOfClouds_3(int32_t value)
	{
		___amountOfClouds_3 = value;
	}

	inline static int32_t get_offset_of_platforms_4() { return static_cast<int32_t>(offsetof(Clouds_t2021315838, ___platforms_4)); }
	inline Platforms_t4284597824 * get_platforms_4() const { return ___platforms_4; }
	inline Platforms_t4284597824 ** get_address_of_platforms_4() { return &___platforms_4; }
	inline void set_platforms_4(Platforms_t4284597824 * value)
	{
		___platforms_4 = value;
		Il2CppCodeGenWriteBarrier(&___platforms_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Clouds_t2021315838, ___player_5)); }
	inline GameObject_t3674682005 * get_player_5() const { return ___player_5; }
	inline GameObject_t3674682005 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t3674682005 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
