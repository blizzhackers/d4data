/**
 * Definition: tcec695fb
 * Hash: cec695fb
 */

#pragma once

#include "../types.h"
#include "t252cba6b.h"
#include "tc9a200b0.h"
#include "tcabcc4f9.h"
#include "tcec13164.h"
#include "te04c1a6.h"
#include "te84cd001.h"
#include "tfa8eb4a0.h"

#pragma push(pack, 1)

struct tcec695fb : public ComplexRead {
  DT_VARIABLEARRAY<te04c1a6> ptPositions;
  DT_VARIABLEARRAY<tc9a200b0> ptColors;
  DT_VARIABLEARRAY<tcabcc4f9> unk_703599f;
  DT_VARIABLEARRAY<tcec13164> unk_72d072a;
  DT_VARIABLEARRAY<te84cd001> ptRotations;
  DT_VARIABLEARRAY<t252cba6b> unk_22e26f1;
  DT_VARIABLEARRAY<tfa8eb4a0> unk_1666206;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
