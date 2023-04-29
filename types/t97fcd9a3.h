/**
 * Definition: t97fcd9a3
 * Hash: 97fcd9a3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t97fcd9a3 : public ComplexRead {
  DT_FLOAT unk_9b43ddf;
  DT_FLOAT unk_a4ff40;
  DT_FLOAT aMaxSpeed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
