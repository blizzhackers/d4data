/**
 * Definition: tb5002e1
 * Hash: b5002e1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb5002e1 : public ComplexRead {
  DT_GBID<0x14> unk_7316dbf;
  DT_FLOAT unk_7a5b3f7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
