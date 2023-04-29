/**
 * Definition: tc58eb80a
 * Hash: c58eb80a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc58eb80a : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoWorld;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_INT64 unk_fdbe9d6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
