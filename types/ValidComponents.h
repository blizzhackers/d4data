/**
 * Definition: ValidComponents
 * Hash: d69c6f96
 */

#pragma once

#include "../types.h"
#include "ValidComponent.h"

#pragma push(pack, 1)

struct ValidComponents : public ComplexRead {
  DT_VARIABLEARRAY<ValidComponent> unk_38ba886;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
