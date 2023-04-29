/**
 * Definition: t7c82504a
 * Hash: 7c82504a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7c82504a : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::ItemType> snoItemType;
  DT_INT unk_882d30e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
