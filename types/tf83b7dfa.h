/**
 * Definition: tf83b7dfa
 * Hash: f83b7dfa
 */

#pragma once

#include "../types.h"
#include "t96129509.h"

#pragma push(pack, 1)

struct tf83b7dfa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t96129509> unk_cae89f5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
