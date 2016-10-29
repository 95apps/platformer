#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IAPManager
struct IAPManager_t1504779861;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPModel
struct  IAPModel_t2594149329  : public MonoBehaviour_t667441552
{
public:
	// IAPManager IAPModel::iapManager
	IAPManager_t1504779861 * ___iapManager_2;
	// UnityEngine.UI.Dropdown IAPModel::dropDown
	Dropdown_t4201779933 * ___dropDown_3;
	// UnityEngine.GameObject IAPModel::big
	GameObject_t3674682005 * ___big_4;
	// UnityEngine.GameObject IAPModel::Selected
	GameObject_t3674682005 * ___Selected_5;
	// UnityEngine.GameObject IAPModel::coinpackages
	GameObject_t3674682005 * ___coinpackages_6;
	// UnityEngine.UI.Text IAPModel::text
	Text_t9039225 * ___text_7;

public:
	inline static int32_t get_offset_of_iapManager_2() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___iapManager_2)); }
	inline IAPManager_t1504779861 * get_iapManager_2() const { return ___iapManager_2; }
	inline IAPManager_t1504779861 ** get_address_of_iapManager_2() { return &___iapManager_2; }
	inline void set_iapManager_2(IAPManager_t1504779861 * value)
	{
		___iapManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___iapManager_2, value);
	}

	inline static int32_t get_offset_of_dropDown_3() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___dropDown_3)); }
	inline Dropdown_t4201779933 * get_dropDown_3() const { return ___dropDown_3; }
	inline Dropdown_t4201779933 ** get_address_of_dropDown_3() { return &___dropDown_3; }
	inline void set_dropDown_3(Dropdown_t4201779933 * value)
	{
		___dropDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___dropDown_3, value);
	}

	inline static int32_t get_offset_of_big_4() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___big_4)); }
	inline GameObject_t3674682005 * get_big_4() const { return ___big_4; }
	inline GameObject_t3674682005 ** get_address_of_big_4() { return &___big_4; }
	inline void set_big_4(GameObject_t3674682005 * value)
	{
		___big_4 = value;
		Il2CppCodeGenWriteBarrier(&___big_4, value);
	}

	inline static int32_t get_offset_of_Selected_5() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___Selected_5)); }
	inline GameObject_t3674682005 * get_Selected_5() const { return ___Selected_5; }
	inline GameObject_t3674682005 ** get_address_of_Selected_5() { return &___Selected_5; }
	inline void set_Selected_5(GameObject_t3674682005 * value)
	{
		___Selected_5 = value;
		Il2CppCodeGenWriteBarrier(&___Selected_5, value);
	}

	inline static int32_t get_offset_of_coinpackages_6() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___coinpackages_6)); }
	inline GameObject_t3674682005 * get_coinpackages_6() const { return ___coinpackages_6; }
	inline GameObject_t3674682005 ** get_address_of_coinpackages_6() { return &___coinpackages_6; }
	inline void set_coinpackages_6(GameObject_t3674682005 * value)
	{
		___coinpackages_6 = value;
		Il2CppCodeGenWriteBarrier(&___coinpackages_6, value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(IAPModel_t2594149329, ___text_7)); }
	inline Text_t9039225 * get_text_7() const { return ___text_7; }
	inline Text_t9039225 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t9039225 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
