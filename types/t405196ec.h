/**
 * Definition: t405196ec
 * Hash: 405196ec
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t405196ec : public ComplexRead {
  tb42131c6 tTexture;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
