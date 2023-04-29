/**
 * Definition: t7263c59e
 * Hash: 7263c59e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7263c59e : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_INT nMinLevel;
  DT_INT nMaxLevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
