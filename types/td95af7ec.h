/**
 * Definition: td95af7ec
 * Hash: d95af7ec
 */

#pragma once

#include "../types.h"
#include "t5b95dd21.h"

#pragma push(pack, 1)

struct td95af7ec : public ComplexRead {
  DT_ENUM<DT_INT> eVBFormat;
  DT_UINT unk_e91fb07;
  DT_VARIABLEARRAY<t5b95dd21> unk_62bfa18;
  DT_VARIABLEARRAY<DT_BYTE> unk_aea647a;
  DT_INT wEid;
  DT_VARIABLEARRAY<DT_BYTE> ptChunkVertices;
  DT_INT wAid;
  DT_INT baid;
  DT_UINT unk_4c43adc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
