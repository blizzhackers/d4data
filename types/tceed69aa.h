/**
 * Definition: tceed69aa
 * Hash: ceed69aa
 */

#pragma once

#include "../types.h"
#include "t92f92d63.h"

#pragma push(pack, 1)

struct tceed69aa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t92f92d63> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
