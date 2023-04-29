/**
 * Definition: tb0371ad1
 * Hash: b0371ad1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb0371ad1 : public ComplexRead {
  DT_STRING_FORMULA tFormula;
  DT_UINT unk_d55170;
  DT_INT unk_62967bd;
  DT_INT unk_9554429;
  DT_ENUM<DT_INT> unk_395cf3a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
