/**
 * Definition: t7968ae25
 * Hash: 7968ae25
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7968ae25 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
