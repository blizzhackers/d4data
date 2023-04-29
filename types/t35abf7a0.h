/**
 * Definition: t35abf7a0
 * Hash: 35abf7a0
 */

#pragma once

#include "../types.h"
#include "t39952607.h"
#include "t3c7c9170.h"
#include "t71838e4c.h"

#pragma push(pack, 1)

struct t35abf7a0 : public ComplexRead {
  DT_ENUM<DT_INT> eGender;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_FLOAT unk_b50cfcc;
  DT_VARIABLEARRAY<t71838e4c> unk_676ce65;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Power>> unk_651d9cb;
  DT_FLOAT unk_4283fe4;
  DT_FIXEDARRAY<t3c7c9170, 26> unk_bba0b7f;
  DT_VARIABLEARRAY<t39952607> unk_a90a48d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
