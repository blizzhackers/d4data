/**
 * Definition: Anim2DFrame
 * Hash: a4d7e8e6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Anim2DFrame : public ComplexRead {
  DT_UINT hImage;
  DT_RGBACOLOR rgbaColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
