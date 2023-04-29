/**
 * Definition: SubObjectNameInfo
 * Hash: c4bb496e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SubObjectNameInfo : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_BYTE unk_551fc93;
  DT_BYTE dwState;
  DT_UINT dwStyle;
  DT_UINT unk_82bbe21;
  DT_UINT unk_d9c73f4;
  DT_UINT unk_a6e7ff2;
  DT_UINT unk_c15f7d2;
  DT_UINT unk_92fdd14;
  DT_UINT unk_b0b7d46;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
