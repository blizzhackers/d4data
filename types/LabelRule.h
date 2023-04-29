/**
 * Definition: LabelRule
 * Hash: 8518cc78
 */

#pragma once

#include "../types.h"
#include "LabelEntry.h"

#pragma push(pack, 1)

struct LabelRule : public ComplexRead {
  DT_CHARARRAY<128> szRuleName;
  DT_INT nNumToChoose;
  DT_VARIABLEARRAY<LabelEntry> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
