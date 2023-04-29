/**
 * Definition: TranslationCurve
 * Hash: 235578f4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TranslationCurve : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> ptKeysComp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
