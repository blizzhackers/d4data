/**
 * Definition: ActivityReward
 * Hash: 790dfd72
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActivityReward : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
