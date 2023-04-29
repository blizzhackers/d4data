/**
 * Definition: t8a3936b2
 * Hash: 8a3936b2
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct t8a3936b2 : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
