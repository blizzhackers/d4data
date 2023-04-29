/**
 * Definition: t2ab21d25
 * Hash: 2ab21d25
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2ab21d25 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_BYTE> unk_43081cf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
