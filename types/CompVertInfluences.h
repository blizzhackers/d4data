/**
 * Definition: CompVertInfluences
 * Hash: f92e899c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CompVertInfluences : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
