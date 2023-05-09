/**
 * Definition: SubObjectAppearance
 * Hash: 7c7b9811
 */

#pragma once

#include "../types.h"
#include "AnimationClothOverride.h"

#pragma push(pack, 1)

struct SubObjectAppearance : public ComplexRead {
  DT_UINT dwFlags;
  DT_SNO<SnoGroup::Material> snoMaterial;
  DT_SNO<SnoGroup::Material> unk_54b79bf;
  DT_SNO<SnoGroup::Cloth> snoCloth;
  DT_SNO<SnoGroup::Cloth> unk_3ca0753;
  DT_SNO<SnoGroup::Cloth> unk_1f70f66;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_VARIABLEARRAY<AnimationClothOverride> unk_3f71565;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Material>> unk_665d6aa;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
