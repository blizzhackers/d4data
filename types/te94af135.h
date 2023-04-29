/**
 * Definition: te94af135
 * Hash: e94af135
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct te94af135 : public ComplexRead {
  DT_UINT szName;
  StringLabelHandleEx hLabel;
  DT_RGBACOLOR rgbaColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
