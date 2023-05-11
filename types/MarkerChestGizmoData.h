/**
 * Definition: MarkerChestGizmoData
 * Hash: 1121a259
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerChestGizmoData : public ComplexRead {
  DT_SNO<SnoGroup::TreasureClass> snoTreasureClass;
  DT_INT unk_2a0e071;
  DT_FLOAT unk_e86679d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
