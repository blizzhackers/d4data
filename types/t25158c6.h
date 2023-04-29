/**
 * Definition: t25158c6
 * Hash: 25158c6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t25158c6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
