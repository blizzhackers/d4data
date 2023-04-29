/**
 * Definition: t6b603dda
 * Hash: 6b603dda
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6b603dda : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> unk_1a41b9f;
  DT_INT64 dwKey;
  DT_VARIABLEARRAY<DT_UINT> unk_8e5f439;
  DT_VARIABLEARRAY<DT_INT> unk_d4d5dbb;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> ptResourceSlot;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_6f6dbab;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
