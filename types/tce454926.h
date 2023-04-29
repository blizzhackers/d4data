/**
 * Definition: tce454926
 * Hash: ce454926
 */

#pragma once

#include "../types.h"
#include "tc65eab2c.h"

#pragma push(pack, 1)

struct tce454926 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tc65eab2c> unk_e4e2cd2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
