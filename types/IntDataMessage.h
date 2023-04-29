/**
 * Definition: IntDataMessage
 * Hash: 8ba1de2a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct IntDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
