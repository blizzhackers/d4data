/**
 * Definition: t29aeb8aa
 * Hash: 29aeb8aa
 */

#pragma once

#include "../types.h"
#include "te730cffb.h"

#pragma push(pack, 1)

struct t29aeb8aa : public ComplexRead {
  DT_GBID<0x14> unk_7316dbf;
  DT_FIXEDARRAY<te730cffb, 9> unk_74acb9c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
