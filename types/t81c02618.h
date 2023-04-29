/**
 * Definition: t81c02618
 * Hash: 81c02618
 */

#pragma once

#include "../types.h"
#include "ta8e85f45.h"

#pragma push(pack, 1)

struct t81c02618 : public ComplexRead {
  ta8e85f45 tValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
