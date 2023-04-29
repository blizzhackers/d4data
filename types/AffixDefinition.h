/**
 * Definition: AffixDefinition
 * Hash: ce7ab37
 */

#pragma once

#include "../types.h"
#include "t1dea6151.h"

#pragma push(pack, 1)

struct AffixDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eMagicType;
  DT_ENUM<DT_INT> eCategory;
  DT_INT unk_1717b6e;
  DT_INT unk_1717a70;
  DT_STRING_FORMULA tCost;
  DT_SNO<SnoGroup::StringList> snoRareNamePrefixStringList;
  DT_SNO<SnoGroup::StringList> snoRareNameSuffixStringList;
  DT_GBID<0x12> gbidAffixFamily;
  DT_FIXEDARRAY<DT_INT, 5> unk_d1d9b8;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_d03ebfd;
  DT_UINT dwAllowedQualityLevels;
  DT_ENUM<DT_INT> eAffixType;
  DT_VARIABLEARRAY<t1dea6151> unk_2a52848;
  DT_VARIABLEARRAY<DT_FLOAT> unk_46fa14b;
  DT_SNO<SnoGroup::Power> snoPassivePower;
  DT_SNO<SnoGroup::PlayerClass> unk_14e8917;
  DT_VARIABLEARRAY<DT_GBID<0x38>> unk_44ef64f;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Power>> unk_f5936eb;
  DT_VARIABLEARRAY<DT_GBID<0x38>> unk_cc55a2d;
  DT_VARIABLEARRAY<DT_GBID<0x38>> unk_bd86972;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
