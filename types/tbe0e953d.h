/**
 * Definition: tbe0e953d
 * Hash: be0e953d
 */

#pragma once

#include "../types.h"
#include "LabelGBID.h"

#pragma push(pack, 1)

struct tbe0e953d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<LabelGBID> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
