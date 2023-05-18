/**
 * Definition: ParagonNodeDefinition
 * Hash: 29664b57
 */

#pragma once

#include "../types.h"
#include "AttributeSpecifier.h"

#pragma push(pack, 1)

struct ParagonNodeDefinition : public ComplexRead {
  DT_UINT hIcon;
  DT_UINT hIconMask;
  DT_ENUM<DT_INT> unk_7714b98;
  DT_ENUM<DT_INT> unk_3556860;
  DT_SNO<SnoGroup::Power> snoPassivePower;
  DT_VARIABLEARRAY<AttributeSpecifier> ptAttributes;
  DT_VARIABLEARRAY<DT_INT> unk_8ba8e1e;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ParagonThreshold>> arThresholdSelector;
  DT_INT unk_2133527;
  DT_INT unk_a5d749f;
  DT_VARIABLEARRAY<DT_GBID<0x38>> arSkillTags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
