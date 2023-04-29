/**
 * Definition: t7e01ffa9
 * Hash: 7e01ffa9
 */

#pragma once

#include "../types.h"
#include "t3d4fd272.h"
#include "t6f71323a.h"
#include "tc746470f.h"

#pragma push(pack, 1)

struct t7e01ffa9 : public ComplexRead {
  DT_SNO<SnoGroup::SoundTable> unk_f13a861;
  DT_ENUM<DT_INT> unk_d70e05d;
  DT_VARIABLEARRAY<t6f71323a> unk_8a74e60;
  DT_FLOAT unk_5909501;
  DT_VARIABLEARRAY<tc746470f> unk_44e3edc;
  DT_VARIABLEARRAY<t3d4fd272> unk_5b826ba;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
