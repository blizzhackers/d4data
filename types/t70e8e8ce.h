/**
 * Definition: t70e8e8ce
 * Hash: 70e8e8ce
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct t70e8e8ce : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
