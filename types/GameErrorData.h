/**
 * Definition: GameErrorData
 * Hash: dda33f9e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GameErrorData : public ComplexRead {
  DT_ENUM<DT_INT> eError;
  DT_UINT dwVal;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
