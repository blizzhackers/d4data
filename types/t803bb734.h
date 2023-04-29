/**
 * Definition: t803bb734
 * Hash: 803bb734
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t803bb734 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT uProfileAwardId;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
