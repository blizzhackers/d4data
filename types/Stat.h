/**
 * Definition: Stat
 * Hash: 2f7ddc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Stat : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
