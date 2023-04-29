/**
 * Definition: tbf28a9b0
 * Hash: bf28a9b0
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tbf28a9b0 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FLOAT flStart;
  DT_FLOAT flDuration;
  DT_FLOAT unk_e5c87c4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
