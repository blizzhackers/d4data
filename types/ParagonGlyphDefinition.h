/**
 * Definition: ParagonGlyphDefinition
 * Hash: 572c2915
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ParagonGlyphDefinition : public ComplexRead {
  DT_UINT hIcon;
  DT_UINT unk_7b0d1b5;
  DT_VARIABLEARRAY<DT_UINT> unk_5bc7861;
  DT_UINT nMaxLevel;
  DT_ENUM<DT_INT> eRarity;
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ParagonGlyphAffix>> arAffixes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
