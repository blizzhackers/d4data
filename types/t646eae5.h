/**
 * Definition: t646eae5
 * Hash: 646eae5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t646eae5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT aFOV;
  DT_FLOAT unk_b046307;
  DT_FLOAT unk_cc38bbe;
  DT_FLOAT unk_101b2fc;
  DT_FLOAT unk_6749d34;
  DT_FLOAT unk_839bfef;
  DT_FLOAT flNearPlane;
  DT_FLOAT flFarPlane;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
