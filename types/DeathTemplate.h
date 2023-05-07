/**
 * Definition: DeathTemplate
 * Hash: ff787262
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DeathTemplate : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
