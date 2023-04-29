/**
 * Definition: t4b4e239c
 * Hash: 4b4e239c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4b4e239c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eCrafterType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
