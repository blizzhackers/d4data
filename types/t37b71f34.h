/**
 * Definition: t37b71f34
 * Hash: 37b71f34
 */

#pragma once

#include "../types.h"
#include "tb86f8607.h"

#pragma push(pack, 1)

struct t37b71f34 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  tb86f8607 unk_a1f5263;
  DT_INT unk_ef69835;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
