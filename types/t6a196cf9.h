/**
 * Definition: t6a196cf9
 * Hash: 6a196cf9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6a196cf9 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
