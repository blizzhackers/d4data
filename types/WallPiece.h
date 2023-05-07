/**
 * Definition: WallPiece
 * Hash: 969dccd6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WallPiece : public ComplexRead {
  DT_SNO_NAME unk_9598b68;
  DT_UINT szLookName;
  DT_UINT unk_6c0cb90;
  DT_INT unk_189be9b;
  DT_INT unk_94a2b91;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_FLOAT flWeight;
  DT_FLOAT unk_9396f37;
  DT_ENUM<DT_INT> unk_f116b76;
  DT_INT unk_da5b372;
  DT_INT unk_8dea4d9;
  DT_INT nFadeGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
