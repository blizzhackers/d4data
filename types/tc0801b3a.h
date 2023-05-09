/**
 * Definition: tc0801b3a
 * Hash: c0801b3a
 */

#pragma once

#include "../types.h"
#include "QuestTagsEntry.h"

#pragma push(pack, 1)

struct tc0801b3a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<QuestTagsEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
