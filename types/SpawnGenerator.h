/**
 * Definition: SpawnGenerator
 * Hash: c22163b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SpawnGenerator : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
