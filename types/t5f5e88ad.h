/**
 * Definition: t5f5e88ad
 * Hash: 5f5e88ad
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5f5e88ad : public ComplexRead {
  DT_INT nFrameStart;
  DT_INT nFrameEnd;
  DT_FLOAT unk_f28aa5a;
  DT_INT unk_963cba8;
  DT_INT unk_65d9350;
  DT_UINT unk_6ebf840;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
