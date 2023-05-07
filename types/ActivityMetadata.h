/**
 * Definition: ActivityMetadata
 * Hash: 5032d4ee
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActivityMetadata : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
