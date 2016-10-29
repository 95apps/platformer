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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// Jukebox
struct Jukebox_t407329702;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Jukebox
struct  Jukebox_t407329702  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource Jukebox::src
	AudioSource_t1740077639 * ___src_2;
	// UnityEngine.AudioClip[] Jukebox::backgroundSounds
	AudioClipU5BU5D_t3001083477* ___backgroundSounds_3;
	// UnityEngine.Sprite[] Jukebox::muteSprites
	SpriteU5BU5D_t2761310900* ___muteSprites_5;
	// UnityEngine.UI.Image Jukebox::settingImage
	Image_t538875265 * ___settingImage_6;

public:
	inline static int32_t get_offset_of_src_2() { return static_cast<int32_t>(offsetof(Jukebox_t407329702, ___src_2)); }
	inline AudioSource_t1740077639 * get_src_2() const { return ___src_2; }
	inline AudioSource_t1740077639 ** get_address_of_src_2() { return &___src_2; }
	inline void set_src_2(AudioSource_t1740077639 * value)
	{
		___src_2 = value;
		Il2CppCodeGenWriteBarrier(&___src_2, value);
	}

	inline static int32_t get_offset_of_backgroundSounds_3() { return static_cast<int32_t>(offsetof(Jukebox_t407329702, ___backgroundSounds_3)); }
	inline AudioClipU5BU5D_t3001083477* get_backgroundSounds_3() const { return ___backgroundSounds_3; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_backgroundSounds_3() { return &___backgroundSounds_3; }
	inline void set_backgroundSounds_3(AudioClipU5BU5D_t3001083477* value)
	{
		___backgroundSounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSounds_3, value);
	}

	inline static int32_t get_offset_of_muteSprites_5() { return static_cast<int32_t>(offsetof(Jukebox_t407329702, ___muteSprites_5)); }
	inline SpriteU5BU5D_t2761310900* get_muteSprites_5() const { return ___muteSprites_5; }
	inline SpriteU5BU5D_t2761310900** get_address_of_muteSprites_5() { return &___muteSprites_5; }
	inline void set_muteSprites_5(SpriteU5BU5D_t2761310900* value)
	{
		___muteSprites_5 = value;
		Il2CppCodeGenWriteBarrier(&___muteSprites_5, value);
	}

	inline static int32_t get_offset_of_settingImage_6() { return static_cast<int32_t>(offsetof(Jukebox_t407329702, ___settingImage_6)); }
	inline Image_t538875265 * get_settingImage_6() const { return ___settingImage_6; }
	inline Image_t538875265 ** get_address_of_settingImage_6() { return &___settingImage_6; }
	inline void set_settingImage_6(Image_t538875265 * value)
	{
		___settingImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___settingImage_6, value);
	}
};

struct Jukebox_t407329702_StaticFields
{
public:
	// Jukebox Jukebox::Instance
	Jukebox_t407329702 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(Jukebox_t407329702_StaticFields, ___Instance_4)); }
	inline Jukebox_t407329702 * get_Instance_4() const { return ___Instance_4; }
	inline Jukebox_t407329702 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(Jukebox_t407329702 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
