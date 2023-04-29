/**
 * Definition: tf7485455
 * Hash: f7485455
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf7485455 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
