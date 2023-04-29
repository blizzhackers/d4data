/**
 * Definition: t41e68f26
 * Hash: 41e68f26
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t41e68f26 : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;
  DT_RGBACOLOR tValue;
  DT_ENUM<DT_INT> unk_6ca113c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
