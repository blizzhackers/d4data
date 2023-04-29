/**
 * Definition: tb560d7ec
 * Hash: b560d7ec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb560d7ec : public ComplexRead {
  DT_UINT dwType;
  DT_UINT uProfileAwardId;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
