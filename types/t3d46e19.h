/**
 * Definition: t3d46e19
 * Hash: 3d46e19
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "tafbbdb78.h"

#pragma push(pack, 1)

struct t3d46e19 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_ENUM<DT_INT> unk_c3afaa0;
  DT_VARIABLEARRAY<tafbbdb78> unk_b7d314f;
  DT_ENUM<DT_INT> unk_4311d19;
  HardpointLink unk_59c4651;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
