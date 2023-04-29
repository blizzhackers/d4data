/**
 * Definition: t85e87f2d
 * Hash: 85e87f2d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t85e87f2d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_INT unk_b020582;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
