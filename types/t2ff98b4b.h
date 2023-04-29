/**
 * Definition: t2ff98b4b
 * Hash: 2ff98b4b
 */

#pragma once

#include "../types.h"
#include "tb4bdc10f.h"

#pragma push(pack, 1)

struct t2ff98b4b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  tb4bdc10f tParams;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
