/**
 * Definition: MaterialValueSetDefinition
 * Hash: 6ce65741
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MaterialValueSetDefinition : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
