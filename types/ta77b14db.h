/**
 * Definition: ta77b14db
 * Hash: a77b14db
 */

#pragma once

#include "../types.h"
#include "tc6d4c449.h"

#pragma push(pack, 1)

struct ta77b14db : public ComplexRead {
  DT_INT unk_db96ab2;
  DT_UINT hClassTitle;
  DT_UINT unk_a210c9f;
  DT_UINT hResource;
  DT_VARIABLEARRAY<tc6d4c449> unk_2af459a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
