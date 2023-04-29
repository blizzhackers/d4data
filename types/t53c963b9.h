/**
 * Definition: t53c963b9
 * Hash: 53c963b9
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t53c963b9 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_ACD_NETWORK_NAME unk_a54c2e0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
