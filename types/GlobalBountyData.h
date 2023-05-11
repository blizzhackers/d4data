/**
 * Definition: GlobalBountyData
 * Hash: d9030b8c
 */

#pragma once

#include "../types.h"
#include "BountyZones.h"

#pragma push(pack, 1)

struct GlobalBountyData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FIXEDARRAY<BountyZones, 8> arBountyZones;
  DT_UINT unk_297c737;
  DT_UINT unk_65250c9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
