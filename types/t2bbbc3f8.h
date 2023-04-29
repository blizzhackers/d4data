/**
 * Definition: t2bbbc3f8
 * Hash: 2bbbc3f8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2bbbc3f8 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> unk_a5fdfef;
  DT_ENUM<DT_INT> unk_e69585a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
