/**
 * Definition: t12a05eca
 * Hash: 12a05eca
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t12a05eca : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_828d6cf;
  DT_FLOAT unk_a7dff70;
  tcbfdd2ea unk_821e462;
  tcbfdd2ea unk_821e463;
  DT_UINT dwAnimFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
