/**
 * Definition: tec5df525
 * Hash: ec5df525
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tec5df525 : public ComplexRead {
  DT_INT nFrameStart;
  DT_INT nFrameEnd;
  DT_FLOAT unk_f28aa5a;
  DT_INT unk_963cba8;
  DT_INT unk_65d9350;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
