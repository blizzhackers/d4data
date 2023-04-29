/**
 * Definition: te6b22340
 * Hash: e6b22340
 */

#pragma once

#include "../types.h"
#include "t969dccd6.h"

#pragma push(pack, 1)

struct te6b22340 : public ComplexRead {
  DT_VARIABLEARRAY<t969dccd6> unk_ea28b4c;
  DT_ENUM<DT_INT> unk_f2499b0;
  DT_RANGE<DT_INT> unk_755f012;
  DT_RANGE<DT_INT> tHorizontalOffset;
  DT_RANGE<DT_INT> tScale;
  DT_RANGE<DT_INT> tYaw;
  DT_INT unk_609e23d;
  DT_INT unk_d8fcfe4;
  DT_INT unk_435bdfd;
  DT_INT unk_f2dbd17;
  DT_RANGE<DT_INT> tVerticalOffset;
  DT_FLOAT unk_2a8c4b6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
