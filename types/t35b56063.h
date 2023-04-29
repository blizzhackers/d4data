/**
 * Definition: t35b56063
 * Hash: 35b56063
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t35b56063 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_INT nMinLevel;
  DT_INT nMaxLevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
