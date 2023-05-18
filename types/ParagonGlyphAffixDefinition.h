/**
 * Definition: ParagonGlyphAffixDefinition
 * Hash: 1a6c1563
 */

#pragma once

#include "../types.h"
#include "t3f44d2ec.h"
#include "tdcc8652e.h"

#pragma push(pack, 1)

struct ParagonGlyphAffixDefinition : public ComplexRead {
  DT_VARIABLEARRAY<tdcc8652e> unk_3bfd2fb;
  DT_ENUM<DT_INT> unk_a16a4d8;
  DT_ENUM<DT_INT> unk_e53c570;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ParagonThreshold>> arThresholdSelector;
  DT_ENUM<DT_INT> eBonusOperation;
  DT_VARIABLEARRAY<t3f44d2ec> unk_e80c332;
  DT_GBID<0x16> unk_2506574;
  DT_FLOAT unk_680001b;
  DT_FLOAT unk_1135a20;
  DT_FLOAT unk_12a5abd;
  DT_SNO<SnoGroup::Power> unk_7aabf1f;
  DT_VARIABLEARRAY<tdcc8652e> arBonusAttributes;
  DT_VARIABLEARRAY<DT_GBID<0x38>> unk_44ef64f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
