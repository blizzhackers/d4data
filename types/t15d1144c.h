/**
 * Definition: t15d1144c
 * Hash: 15d1144c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t15d1144c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
