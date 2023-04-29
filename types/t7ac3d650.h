/**
 * Definition: t7ac3d650
 * Hash: 7ac3d650
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7ac3d650 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT nCrafterType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
