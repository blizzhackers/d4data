/**
 * Definition: t53844691
 * Hash: 53844691
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"
#include "tfbb7557a.h"

#pragma push(pack, 1)

struct t53844691 : public ComplexRead {
  tfbb7557a key;
  tf18a2f0 tDebugName;
  DT_INT unk_a08b499;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
