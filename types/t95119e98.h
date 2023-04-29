/**
 * Definition: t95119e98
 * Hash: 95119e98
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t95119e98 : public ComplexRead {
  DT_INT unk_77caf9d;
  DT_UINT unk_e38abf;
  DT_ENUM<DT_INT> eTileType;
  DT_UINT unk_cf3ee;
  DT_UINT dwGroupId;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
