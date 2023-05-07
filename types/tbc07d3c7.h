/**
 * Definition: tbc07d3c7
 * Hash: bc07d3c7
 */

#pragma once

#include "../types.h"
#include "t3ddf9693.h"

#pragma push(pack, 1)

struct tbc07d3c7 : public ComplexRead {
  DT_VARIABLEARRAY<t3ddf9693> arPieces;
  DT_VARIABLEARRAY<t3ddf9693> unk_85db88e;
  DT_VARIABLEARRAY<t3ddf9693> unk_767477;
  DT_RANGE<DT_INT> unk_755f012;
  DT_ENUM<DT_INT> unk_f2499b0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
