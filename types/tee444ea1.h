/**
 * Definition: tee444ea1
 * Hash: ee444ea1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tee444ea1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwID;
  DT_SNO_NAME tSNOName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
