/**
 * Definition: tb8237382
 * Hash: b8237382
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb8237382 : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_8536b47;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
