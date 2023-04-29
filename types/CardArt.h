/**
 * Definition: CardArt
 * Hash: 10092e81
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CardArt : public ComplexRead {
  DT_UINT unk_be78b25;
  DT_UINT unk_7bf14a9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
