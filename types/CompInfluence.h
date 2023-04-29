/**
 * Definition: CompInfluence
 * Hash: f8632608
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CompInfluence : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
