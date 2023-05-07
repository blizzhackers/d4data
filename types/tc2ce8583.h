/**
 * Definition: tc2ce8583
 * Hash: c2ce8583
 */

#pragma once

#include "../types.h"
#include "tb88f4265.h"

#pragma push(pack, 1)

struct tc2ce8583 : public ComplexRead {
  DT_VECTOR4D unk_8078288;
  DT_VECTOR4D unk_80782b8;
  DT_VECTOR4D v;
  DT_VECTOR4D vw;
  tb88f4265 unk_fe3c31a;
  tb88f4265 unk_ba20daa;
  tb88f4265 unk_dd9e335;
  DT_VECTOR4D unk_72a7ce6;
  DT_VECTOR4D unk_954393e;
  DT_VECTOR4D unk_c8b717f;
  DT_VECTOR4D unk_8dcbeec;
  DT_FLOAT unk_36fad31;
  DT_FLOAT invMass;
  DT_FLOAT unk_e04dc91;
  DT_WORD parentIndex;
  DT_WORD unk_29ff5d4;
  DT_WORD unk_7f4d141;
  DT_WORD unk_f67de53;
  DT_FLOAT unk_87816fd;
  DT_WORD unk_e7f5729;
  DT_WORD flags;
  DT_FIXEDARRAY<DT_WORD, 4> aInfluences;
  DT_FIXEDARRAY<DT_WORD, 6> padding;
  DT_VECTOR4D weights;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
