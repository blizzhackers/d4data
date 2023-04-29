/**
 * Definition: GenericBlobMessage
 * Hash: a5935d21
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct GenericBlobMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_WORD uBlobSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
