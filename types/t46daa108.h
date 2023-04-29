/**
 * Definition: t46daa108
 * Hash: 46daa108
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t46daa108 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_INT unk_5d2c092;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
