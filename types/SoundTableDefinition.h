/**
 * Definition: SoundTableDefinition
 * Hash: 560fba
 */

#pragma once

#include "../types.h"
#include "SoundTableEntry.h"

#pragma push(pack, 1)

struct SoundTableDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_VARIABLEARRAY<SoundTableEntry> tEntries;
  DT_SNO<SnoGroup::SoundTable> unk_e482608;
  SoundTableEntry tDefaultEntry;
  DT_INT64 ptPostprocessed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
