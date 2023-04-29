/**
 * Definition: t3c7c0e3d
 * Hash: 3c7c0e3d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t3c7c0e3d : public ComplexRead {
  RequiredMessageHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
