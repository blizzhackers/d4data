/**
 * Definition: t4d7ce083
 * Hash: 4d7ce083
 */

#pragma once

#include "../types.h"
#include "t60ad4aad.h"
#include "t6aa3726a.h"
#include "t81c02618.h"
#include "t8bb64dd5.h"

#pragma push(pack, 1)

struct t4d7ce083 : public ComplexRead {
  DT_VARIABLEARRAY<t81c02618> unk_952c928;
  DT_VARIABLEARRAY<t60ad4aad> unk_782eb3d;
  DT_VARIABLEARRAY<t8bb64dd5> unk_e789a65;
  DT_VARIABLEARRAY<t6aa3726a> unk_ca8bc7a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
