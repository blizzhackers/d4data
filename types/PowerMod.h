/**
 * Definition: PowerMod
 * Hash: 520c452d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerMod : public ComplexRead {
  DT_UINT szName;
  DT_INT nMaxPoints;
  DT_UINT dwModId;
  DT_UINT dwModMask;
  DT_UINT unk_94cc84e;
  DT_INT unk_939ad1e;
  DT_INT unk_7b47c37;
  DT_VARIABLEARRAY<DT_GBID<0x38>> arSkillTags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
