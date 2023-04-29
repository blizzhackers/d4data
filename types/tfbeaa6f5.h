/**
 * Definition: tfbeaa6f5
 * Hash: fbeaa6f5
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct tfbeaa6f5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_INT unk_2838d01;
  DT_UINT szSubObjectName;
  tcbfdd2ea unk_5302075;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
