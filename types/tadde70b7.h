/**
 * Definition: tadde70b7
 * Hash: adde70b7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tadde70b7 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT64 unk_8a6cb1e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
