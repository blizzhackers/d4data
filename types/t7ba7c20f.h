/**
 * Definition: t7ba7c20f
 * Hash: 7ba7c20f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7ba7c20f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
