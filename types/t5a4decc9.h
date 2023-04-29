/**
 * Definition: t5a4decc9
 * Hash: 5a4decc9
 */

#pragma once

#include "../types.h"
#include "tf5b98542.h"

#pragma push(pack, 1)

struct t5a4decc9 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tf5b98542> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
