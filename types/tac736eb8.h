/**
 * Definition: tac736eb8
 * Hash: ac736eb8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tac736eb8 : public ComplexRead {
  DT_INT value;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
