/**
 * Definition: t7b11e164
 * Hash: 7b11e164
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7b11e164 : public ComplexRead {
  DT_STARTLOC_NAME dwEntranceName;
  DT_INT unk_7d1b2c3;
  DT_SNO<SnoGroup::Power> unk_eb1dc3b;
  DT_UINT unk_336454f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
