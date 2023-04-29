/**
 * Definition: t6cf70a0e
 * Hash: 6cf70a0e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6cf70a0e : public ComplexRead {
  DT_VECTOR3D wpPosition;
  DT_UINT uEntranceGUID;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_INT unk_38c174;
  DT_SNO<SnoGroup::Condition> unk_ba8fd29;
  DT_INT unk_e5c224a;
  DT_UINT hMinimapIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
