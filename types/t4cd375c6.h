/**
 * Definition: t4cd375c6
 * Hash: 4cd375c6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4cd375c6 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eCompare;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
