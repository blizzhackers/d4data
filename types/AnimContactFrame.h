/**
 * Definition: AnimContactFrame
 * Hash: e050809c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimContactFrame : public ComplexRead {
  DT_INT nFrameNumber;
  DT_VECTOR3D vLocalOffset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
