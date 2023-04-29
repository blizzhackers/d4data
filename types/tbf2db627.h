/**
 * Definition: tbf2db627
 * Hash: bf2db627
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tbf2db627 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_99e9721;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
