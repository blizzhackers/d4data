/**
 * Definition: tb11adc69
 * Hash: b11adc69
 */

#pragma once

#include "../types.h"
#include "WeaponExpertiseRanks.h"

#pragma push(pack, 1)

struct tb11adc69 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<WeaponExpertiseRanks> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
