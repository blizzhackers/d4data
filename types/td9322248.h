/**
 * Definition: td9322248
 * Hash: d9322248
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct td9322248 : public ComplexRead {
  DT_INT unk_b64479;
  DT_CSTRING unk_6bc7c8e;
  DT_CSTRING unk_538a709;
  DT_ENUM<DT_INT> unk_e88a211;
  DT_ENUM<DT_INT> unk_18016cb;
  DT_RGBACOLOR unk_cac6d29;
  DT_RGBACOLOR unk_aeeea38;
  DT_RGBACOLOR unk_670b4a9;
  DT_INT unk_3368b;
  DT_VARIABLEARRAY<StringLabelHandleEx> unk_b13dca7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
