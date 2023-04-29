/**
 * Definition: tb11adc69
 * Hash: b11adc69
 */

#pragma once

#include "../types.h"
#include "t47f33ce2.h"

#pragma push(pack, 1)

struct tb11adc69 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t47f33ce2> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
