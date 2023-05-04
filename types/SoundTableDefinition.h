/**
 * Definition: SoundTableDefinition
 * Hash: 560fba
 */

#pragma once

#include "../types.h"
#include "t5a5557c3.h"

#pragma push(pack, 1)

struct SoundTableDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_VARIABLEARRAY<t5a5557c3> tEntries;
  DT_SNO<SnoGroup::SoundTable> unk_e482608;
  t5a5557c3 tDefaultEntry;
  DT_INT64 ptPostprocessed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
