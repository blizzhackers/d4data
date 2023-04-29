/**
 * Definition: t8aef87e7
 * Hash: 8aef87e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8aef87e7 : public ComplexRead {
  DT_FLOAT height;
  DT_WORD material;
  DT_BYTE gameFlags;
  DT_BYTE unk_38adf8e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
