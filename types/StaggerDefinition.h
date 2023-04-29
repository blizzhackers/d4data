/**
 * Definition: StaggerDefinition
 * Hash: 413461b6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StaggerDefinition : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
