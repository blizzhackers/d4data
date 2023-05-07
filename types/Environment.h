/**
 * Definition: Environment
 * Hash: 99435235
 */

#pragma once

#include "../types.h"
#include "PostFXParams.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct Environment : public ComplexRead {
  PostFXParams tPostFXParams;
  DT_SNO<SnoGroup::Actor> snoSkyboxActor;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_SNO<SnoGroup::Weather> snoWeather;
  DT_SNO<SnoGroup::Texture> unk_4c76230;
  bcQuat unk_afd6821;
  DT_SNO<SnoGroup::Material> unk_580b325;
  DT_SNO<SnoGroup::Material> unk_9f4feca;
  DT_FLOAT flFarPlaneCap;
  DT_SNO<SnoGroup::AmbientSound> unk_7680ff6;
  DT_SNO<SnoGroup::AmbientSound> unk_31e7772;
  DT_SNO<SnoGroup::AmbientSound> unk_21b2258;
  DT_SNO<SnoGroup::AmbientSound> unk_71767bc;
  DT_SNO<SnoGroup::AmbientSound> unk_96bdac9;
  DT_INT unk_f4f9d6f;
  DT_FLOAT unk_55eead1;
  DT_INT unk_a7ebd97;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
