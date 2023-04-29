/**
 * Definition: tc5064aa7
 * Hash: c5064aa7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc5064aa7 : public ComplexRead {
  DT_INT unk_a988803;
  DT_ENUM<DT_INT> unk_b29fdf6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
