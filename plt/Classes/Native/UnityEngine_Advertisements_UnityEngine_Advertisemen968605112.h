#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;
// UnityEngine.Advertisements.UnityAdsEditorPlaceholder
struct UnityAdsEditorPlaceholder_t3914036105;
// System.String
struct String_t;

#include "UnityEngine_Advertisements_UnityEngine_Advertiseme3542782910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnityAdsEditor
struct  UnityAdsEditor_t968605112  : public UnityAdsPlatform_t3542782910
{
public:
	// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::m_HasDefaultZone
	bool ___m_HasDefaultZone_0;
	// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.UnityAdsEditor::m_ZoneIds
	Il2CppObject* ___m_ZoneIds_1;
	// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::m_Ready
	bool ___m_Ready_2;
	// UnityEngine.Advertisements.UnityAdsEditorPlaceholder UnityEngine.Advertisements.UnityAdsEditor::m_Placeholder
	UnityAdsEditorPlaceholder_t3914036105 * ___m_Placeholder_3;
	// System.String UnityEngine.Advertisements.UnityAdsEditor::m_CampaignDataUrl
	String_t* ___m_CampaignDataUrl_4;

public:
	inline static int32_t get_offset_of_m_HasDefaultZone_0() { return static_cast<int32_t>(offsetof(UnityAdsEditor_t968605112, ___m_HasDefaultZone_0)); }
	inline bool get_m_HasDefaultZone_0() const { return ___m_HasDefaultZone_0; }
	inline bool* get_address_of_m_HasDefaultZone_0() { return &___m_HasDefaultZone_0; }
	inline void set_m_HasDefaultZone_0(bool value)
	{
		___m_HasDefaultZone_0 = value;
	}

	inline static int32_t get_offset_of_m_ZoneIds_1() { return static_cast<int32_t>(offsetof(UnityAdsEditor_t968605112, ___m_ZoneIds_1)); }
	inline Il2CppObject* get_m_ZoneIds_1() const { return ___m_ZoneIds_1; }
	inline Il2CppObject** get_address_of_m_ZoneIds_1() { return &___m_ZoneIds_1; }
	inline void set_m_ZoneIds_1(Il2CppObject* value)
	{
		___m_ZoneIds_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ZoneIds_1, value);
	}

	inline static int32_t get_offset_of_m_Ready_2() { return static_cast<int32_t>(offsetof(UnityAdsEditor_t968605112, ___m_Ready_2)); }
	inline bool get_m_Ready_2() const { return ___m_Ready_2; }
	inline bool* get_address_of_m_Ready_2() { return &___m_Ready_2; }
	inline void set_m_Ready_2(bool value)
	{
		___m_Ready_2 = value;
	}

	inline static int32_t get_offset_of_m_Placeholder_3() { return static_cast<int32_t>(offsetof(UnityAdsEditor_t968605112, ___m_Placeholder_3)); }
	inline UnityAdsEditorPlaceholder_t3914036105 * get_m_Placeholder_3() const { return ___m_Placeholder_3; }
	inline UnityAdsEditorPlaceholder_t3914036105 ** get_address_of_m_Placeholder_3() { return &___m_Placeholder_3; }
	inline void set_m_Placeholder_3(UnityAdsEditorPlaceholder_t3914036105 * value)
	{
		___m_Placeholder_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Placeholder_3, value);
	}

	inline static int32_t get_offset_of_m_CampaignDataUrl_4() { return static_cast<int32_t>(offsetof(UnityAdsEditor_t968605112, ___m_CampaignDataUrl_4)); }
	inline String_t* get_m_CampaignDataUrl_4() const { return ___m_CampaignDataUrl_4; }
	inline String_t** get_address_of_m_CampaignDataUrl_4() { return &___m_CampaignDataUrl_4; }
	inline void set_m_CampaignDataUrl_4(String_t* value)
	{
		___m_CampaignDataUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_CampaignDataUrl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
