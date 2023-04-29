/**
 * Definition: t2bcf7514
 * Hash: 2bcf7514
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2bcf7514 : public ComplexRead {
  DT_FLOAT unk_9b43ddf;
  DT_FLOAT unk_a4ff40;
  DT_FLOAT flMaxSpeed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
