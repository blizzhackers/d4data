/**
 * Definition: tbb7b2a42
 * Hash: bb7b2a42
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbb7b2a42 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x3c> gbidSubzoneModifierTag;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
