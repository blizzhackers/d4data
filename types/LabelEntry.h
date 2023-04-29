/**
 * Definition: LabelEntry
 * Hash: 27436a72
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LabelEntry : public ComplexRead {
  DT_GBID<0x4> gbidLabel;
  DT_UINT uFlags;
  DT_FLOAT flWeight;
  DT_INT nApplyCountMin;
  DT_FLOAT unk_9ac63e8;
  DT_INT unk_b171d47;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
