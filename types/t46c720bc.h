/**
 * Definition: t46c720bc
 * Hash: 46c720bc
 */

#pragma once

#include "../types.h"
#include "t7fb46e7a.h"

#pragma push(pack, 1)

struct t46c720bc : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  t7fb46e7a unk_9b2bc26;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
