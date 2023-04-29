/**
 * Definition: tb8e1451f
 * Hash: b8e1451f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb8e1451f : public ComplexRead {
  DT_FLOAT unk_ce9c86f;
  DT_FLOAT unk_ce9c870;
  DT_FLOAT wWorldEntry;
  DT_FLOAT unk_1f677f2;
  DT_FLOAT unk_1f677f3;
  DT_FLOAT unk_1f677f4;
  DT_INT nIndex;
  DT_WORD dwIncludeMask;
  DT_BYTE dwAxis;
  DT_BYTE dwTriangleCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
