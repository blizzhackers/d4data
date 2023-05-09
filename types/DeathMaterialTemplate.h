/**
 * Definition: DeathMaterialTemplate
 * Hash: 6a7e06d1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DeathMaterialTemplate : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
