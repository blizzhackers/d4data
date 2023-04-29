/**
 * Definition: tf0e6041c
 * Hash: f0e6041c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf0e6041c : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_GBID<0x33> unk_5b5276a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
