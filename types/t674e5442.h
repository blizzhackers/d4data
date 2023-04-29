/**
 * Definition: t674e5442
 * Hash: 674e5442
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t674e5442 : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_c4cbeaa;
  DT_SNO<SnoGroup::Power> unk_f55cdc7;
  DT_SNO<SnoGroup::Power> unk_c0a2b38;
  DT_FLOAT unk_87c7255;
  DT_ENUM<DT_INT> unk_a2d431;
  DT_INT unk_c0c1492;
  DT_UINT unk_57d67bf;
  DT_UINT unk_c7bd259;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
