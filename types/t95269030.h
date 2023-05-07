/**
 * Definition: t95269030
 * Hash: 95269030
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t95269030 : public ComplexRead {
  DT_FLOAT flDist;
  DT_INT nSlots;
  DT_INT unk_13fdbf;
  DT_UINT sLayer;
  DT_INT unk_8680393;
  DT_INT unk_8337d1e;
  DT_INT unk_395f1b4;
  DT_RANGE<DT_INT> unk_346cedc;
  DT_INT unk_6ec4d4;
  DT_FLOAT unk_1281fc2;
  DT_FLOAT unk_6fb4c8e;
  DT_FLOAT unk_2392c67;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
