/**
 * Definition: td3c3637f
 * Hash: d3c3637f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td3c3637f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
