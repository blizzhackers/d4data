/**
 * Definition: ta13668ea
 * Hash: a13668ea
 */

#pragma once

#include "../types.h"
#include "LookLink.h"

#pragma push(pack, 1)

struct ta13668ea : public ComplexRead {
  LookLink unk_fbd9a84;
  LookLink unk_b0214a9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
