/**
 * Definition: PlayerTitleDefinition
 * Hash: 408e68d8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlayerTitleDefinition : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
