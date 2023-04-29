/**
 * Definition: t1aa249c9
 * Hash: 1aa249c9
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t1aa249c9 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_VECTOR3D wpLocation;
  DT_UINT dwEnd;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
