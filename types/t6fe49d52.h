/**
 * Definition: t6fe49d52
 * Hash: 6fe49d52
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6fe49d52 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
