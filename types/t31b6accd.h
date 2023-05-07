/**
 * Definition: t31b6accd
 * Hash: 31b6accd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t31b6accd : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwPortalType;
  DT_INT unk_1bf9922;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_INT bDungeon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
