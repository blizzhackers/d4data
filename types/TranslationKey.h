/**
 * Definition: TranslationKey
 * Hash: fc095f18
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TranslationKey : public ComplexRead {
  DT_INT nFrame;
  DT_VECTOR3D wp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
