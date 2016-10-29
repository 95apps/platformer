#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_t2420166103;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// System.String
struct String_t;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_t1927764170;

#include "Stores_UnityEngine_Purchasing_FakeStore2646191178.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UIFakeStore
struct  UIFakeStore_t4206400118  : public FakeStore_t2646191178
{
public:
	// UnityEngine.Purchasing.UIFakeStore/DialogRequest UnityEngine.Purchasing.UIFakeStore::m_CurrentDialog
	DialogRequest_t2420166103 * ___m_CurrentDialog_5;
	// System.Int32 UnityEngine.Purchasing.UIFakeStore::m_LastSelectedDropdownIndex
	int32_t ___m_LastSelectedDropdownIndex_6;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::UIFakeStoreCanvasPrefab
	GameObject_t3674682005 * ___UIFakeStoreCanvasPrefab_7;
	// UnityEngine.Canvas UnityEngine.Purchasing.UIFakeStore::m_Canvas
	Canvas_t2727140764 * ___m_Canvas_8;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::m_EventSystem
	GameObject_t3674682005 * ___m_EventSystem_9;
	// System.String UnityEngine.Purchasing.UIFakeStore::m_ParentGameObjectPath
	String_t* ___m_ParentGameObjectPath_10;

public:
	inline static int32_t get_offset_of_m_CurrentDialog_5() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___m_CurrentDialog_5)); }
	inline DialogRequest_t2420166103 * get_m_CurrentDialog_5() const { return ___m_CurrentDialog_5; }
	inline DialogRequest_t2420166103 ** get_address_of_m_CurrentDialog_5() { return &___m_CurrentDialog_5; }
	inline void set_m_CurrentDialog_5(DialogRequest_t2420166103 * value)
	{
		___m_CurrentDialog_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentDialog_5, value);
	}

	inline static int32_t get_offset_of_m_LastSelectedDropdownIndex_6() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___m_LastSelectedDropdownIndex_6)); }
	inline int32_t get_m_LastSelectedDropdownIndex_6() const { return ___m_LastSelectedDropdownIndex_6; }
	inline int32_t* get_address_of_m_LastSelectedDropdownIndex_6() { return &___m_LastSelectedDropdownIndex_6; }
	inline void set_m_LastSelectedDropdownIndex_6(int32_t value)
	{
		___m_LastSelectedDropdownIndex_6 = value;
	}

	inline static int32_t get_offset_of_UIFakeStoreCanvasPrefab_7() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___UIFakeStoreCanvasPrefab_7)); }
	inline GameObject_t3674682005 * get_UIFakeStoreCanvasPrefab_7() const { return ___UIFakeStoreCanvasPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of_UIFakeStoreCanvasPrefab_7() { return &___UIFakeStoreCanvasPrefab_7; }
	inline void set_UIFakeStoreCanvasPrefab_7(GameObject_t3674682005 * value)
	{
		___UIFakeStoreCanvasPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___UIFakeStoreCanvasPrefab_7, value);
	}

	inline static int32_t get_offset_of_m_Canvas_8() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___m_Canvas_8)); }
	inline Canvas_t2727140764 * get_m_Canvas_8() const { return ___m_Canvas_8; }
	inline Canvas_t2727140764 ** get_address_of_m_Canvas_8() { return &___m_Canvas_8; }
	inline void set_m_Canvas_8(Canvas_t2727140764 * value)
	{
		___m_Canvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_8, value);
	}

	inline static int32_t get_offset_of_m_EventSystem_9() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___m_EventSystem_9)); }
	inline GameObject_t3674682005 * get_m_EventSystem_9() const { return ___m_EventSystem_9; }
	inline GameObject_t3674682005 ** get_address_of_m_EventSystem_9() { return &___m_EventSystem_9; }
	inline void set_m_EventSystem_9(GameObject_t3674682005 * value)
	{
		___m_EventSystem_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventSystem_9, value);
	}

	inline static int32_t get_offset_of_m_ParentGameObjectPath_10() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118, ___m_ParentGameObjectPath_10)); }
	inline String_t* get_m_ParentGameObjectPath_10() const { return ___m_ParentGameObjectPath_10; }
	inline String_t** get_address_of_m_ParentGameObjectPath_10() { return &___m_ParentGameObjectPath_10; }
	inline void set_m_ParentGameObjectPath_10(String_t* value)
	{
		___m_ParentGameObjectPath_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentGameObjectPath_10, value);
	}
};

struct UIFakeStore_t4206400118_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore::<>f__am$cache0
	Func_2_t1927764170 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(UIFakeStore_t4206400118_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t1927764170 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t1927764170 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t1927764170 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
