/**
 * Definition: t5b3d8ec5
 * Hash: 5b3d8ec5
 */

#pragma once

#include "../types.h"
#include "t71838e4c.h"
#include "t7b33e6d7.h"

#pragma push(pack, 1)

struct t5b3d8ec5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t7b33e6d7> arHairColorList;
  DT_VARIABLEARRAY<t71838e4c> arSkinColorList;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Dye>> arDyeList;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
