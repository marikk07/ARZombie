#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animation
struct Animation_t2068071072;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieControl
struct  ZombieControl_t4200399727  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ZombieControl::shouldMove
	bool ___shouldMove_2;
	// UnityEngine.Animation ZombieControl::animation
	Animation_t2068071072 * ___animation_3;

public:
	inline static int32_t get_offset_of_shouldMove_2() { return static_cast<int32_t>(offsetof(ZombieControl_t4200399727, ___shouldMove_2)); }
	inline bool get_shouldMove_2() const { return ___shouldMove_2; }
	inline bool* get_address_of_shouldMove_2() { return &___shouldMove_2; }
	inline void set_shouldMove_2(bool value)
	{
		___shouldMove_2 = value;
	}

	inline static int32_t get_offset_of_animation_3() { return static_cast<int32_t>(offsetof(ZombieControl_t4200399727, ___animation_3)); }
	inline Animation_t2068071072 * get_animation_3() const { return ___animation_3; }
	inline Animation_t2068071072 ** get_address_of_animation_3() { return &___animation_3; }
	inline void set_animation_3(Animation_t2068071072 * value)
	{
		___animation_3 = value;
		Il2CppCodeGenWriteBarrier(&___animation_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
