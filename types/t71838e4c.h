/**
 * Definition: t71838e4c
 * Hash: 71838e4c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t71838e4c : public ComplexRead {
  DT_ENUM<DT_INT> eBase;
  DT_FLOAT flHue;
  DT_FLOAT flSaturation;
  DT_FLOAT flValue;
  DT_FLOAT unk_186de87;
  DT_RGBACOLOR unk_509016f;
  DT_CSTRING szLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
