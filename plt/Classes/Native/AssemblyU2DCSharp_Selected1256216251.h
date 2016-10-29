#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Scroll
struct Scroll_t2471154413;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Selected
struct  Selected_t1256216251  : public MonoBehaviour_t667441552
{
public:
	// Scroll Selected::selected
	Scroll_t2471154413 * ___selected_2;
	// UnityEngine.GameObject Selected::rawImage
	GameObject_t3674682005 * ___rawImage_3;
	// UnityEngine.GameObject Selected::big
	GameObject_t3674682005 * ___big_4;
	// UnityEngine.GameObject Selected::Equipped
	GameObject_t3674682005 * ___Equipped_5;
	// UnityEngine.GameObject Selected::Equip
	GameObject_t3674682005 * ___Equip_6;
	// UnityEngine.GameObject Selected::PurchaseEquip
	GameObject_t3674682005 * ___PurchaseEquip_7;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___selected_2)); }
	inline Scroll_t2471154413 * get_selected_2() const { return ___selected_2; }
	inline Scroll_t2471154413 ** get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(Scroll_t2471154413 * value)
	{
		___selected_2 = value;
		Il2CppCodeGenWriteBarrier(&___selected_2, value);
	}

	inline static int32_t get_offset_of_rawImage_3() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___rawImage_3)); }
	inline GameObject_t3674682005 * get_rawImage_3() const { return ___rawImage_3; }
	inline GameObject_t3674682005 ** get_address_of_rawImage_3() { return &___rawImage_3; }
	inline void set_rawImage_3(GameObject_t3674682005 * value)
	{
		___rawImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___rawImage_3, value);
	}

	inline static int32_t get_offset_of_big_4() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___big_4)); }
	inline GameObject_t3674682005 * get_big_4() const { return ___big_4; }
	inline GameObject_t3674682005 ** get_address_of_big_4() { return &___big_4; }
	inline void set_big_4(GameObject_t3674682005 * value)
	{
		___big_4 = value;
		Il2CppCodeGenWriteBarrier(&___big_4, value);
	}

	inline static int32_t get_offset_of_Equipped_5() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___Equipped_5)); }
	inline GameObject_t3674682005 * get_Equipped_5() const { return ___Equipped_5; }
	inline GameObject_t3674682005 ** get_address_of_Equipped_5() { return &___Equipped_5; }
	inline void set_Equipped_5(GameObject_t3674682005 * value)
	{
		___Equipped_5 = value;
		Il2CppCodeGenWriteBarrier(&___Equipped_5, value);
	}

	inline static int32_t get_offset_of_Equip_6() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___Equip_6)); }
	inline GameObject_t3674682005 * get_Equip_6() const { return ___Equip_6; }
	inline GameObject_t3674682005 ** get_address_of_Equip_6() { return &___Equip_6; }
	inline void set_Equip_6(GameObject_t3674682005 * value)
	{
		___Equip_6 = value;
		Il2CppCodeGenWriteBarrier(&___Equip_6, value);
	}

	inline static int32_t get_offset_of_PurchaseEquip_7() { return static_cast<int32_t>(offsetof(Selected_t1256216251, ___PurchaseEquip_7)); }
	inline GameObject_t3674682005 * get_PurchaseEquip_7() const { return ___PurchaseEquip_7; }
	inline GameObject_t3674682005 ** get_address_of_PurchaseEquip_7() { return &___PurchaseEquip_7; }
	inline void set_PurchaseEquip_7(GameObject_t3674682005 * value)
	{
		___PurchaseEquip_7 = value;
		Il2CppCodeGenWriteBarrier(&___PurchaseEquip_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
