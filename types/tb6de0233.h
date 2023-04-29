/**
 * Definition: tb6de0233
 * Hash: b6de0233
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb6de0233 : public ComplexRead {
  DT_ENUM<DT_INT> eAttribute;
  DT_STRING_FORMULA tValue;
  DT_INT nParam;
  DT_STRING_FORMULA unk_dffdf28;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
