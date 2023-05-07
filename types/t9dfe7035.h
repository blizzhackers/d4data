/**
 * Definition: t9dfe7035
 * Hash: 9dfe7035
 */

#pragma once

#include "../types.h"
#include "t4d7ce083.h"

#pragma push(pack, 1)

struct t9dfe7035 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_1e3c3c3;
  DT_FLOAT flAngleThreshold;
  DT_INT unk_18f0908;
  DT_INT unk_ec8f2d4;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
