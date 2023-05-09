/**
 * Definition: DeathLookTemplate
 * Hash: 7f66be17
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DeathLookTemplate : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
