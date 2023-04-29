/**
 * Definition: t747da9e7
 * Hash: 747da9e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t747da9e7 : public ComplexRead {
  DT_ENUM<DT_INT> unk_a9a0546;
  DT_SNO<SnoGroup::World> unk_c420444;
  DT_STARTLOC_NAME unk_33d53d0;
  DT_SNO<SnoGroup::LevelArea> snoDestLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
