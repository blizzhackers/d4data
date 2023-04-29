/**
 * Definition: tfd4746f8
 * Hash: fd4746f8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfd4746f8 : public ComplexRead {
  DT_INT unk_c534f19;
  DT_INT unk_c534e1b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
