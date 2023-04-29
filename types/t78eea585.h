/**
 * Definition: t78eea585
 * Hash: 78eea585
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t78eea585 : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_FLOAT flBase;
  DT_FLOAT unk_da65803;
  DT_FLOAT unk_640b8ef;
  DT_FLOAT unk_171732b;
  DT_FLOAT unk_8694d05;
  DT_FLOAT unk_b19aa73;
  DT_FLOAT unk_bf2b603;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
