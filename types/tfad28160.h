/**
 * Definition: tfad28160
 * Hash: fad28160
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfad28160 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> nItemLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
