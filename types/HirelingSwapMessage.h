/**
 * Definition: HirelingSwapMessage
 * Hash: 4fe52792
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct HirelingSwapMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eNewClass;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
