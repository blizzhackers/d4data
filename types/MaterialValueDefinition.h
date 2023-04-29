/**
 * Definition: MaterialValueDefinition
 * Hash: af53ad35
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MaterialValueDefinition : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
