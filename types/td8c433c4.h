/**
 * Definition: td8c433c4
 * Hash: d8c433c4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td8c433c4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eSlot;
  DT_INT unk_7d12b0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
