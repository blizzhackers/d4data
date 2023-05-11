/**
 * Definition: t9a12ec57
 * Hash: 9a12ec57
 */

#pragma once

#include "../types.h"
#include "t517250.h"

#pragma push(pack, 1)

struct t9a12ec57 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t517250> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
