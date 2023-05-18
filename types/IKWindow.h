/**
 * Definition: IKWindow
 * Hash: beb0662c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IKWindow : public ComplexRead {
  DT_RANGE<DT_INT> unk_fa00882;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
