/**
 * Definition: t517250
 * Hash: 517250
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct t517250 : public ComplexRead {
  GBIDHeader tHeader;
  DT_UINT unk_20d9783;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
