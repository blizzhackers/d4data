/**
 * Definition: t4bd0bef6
 * Hash: 4bd0bef6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4bd0bef6 : public ComplexRead {
  DT_ENUM<DT_INT> unk_2caf02a;
  DT_ENUM<DT_INT> unk_9295264;
  DT_ENUM<DT_INT> unk_e019708;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
