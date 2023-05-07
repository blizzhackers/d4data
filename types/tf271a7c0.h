/**
 * Definition: tf271a7c0
 * Hash: f271a7c0
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tf271a7c0 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eUnitType;
  DT_ENUM<DT_INT> unk_b0a3524;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
