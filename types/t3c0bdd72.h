/**
 * Definition: t3c0bdd72
 * Hash: 3c0bdd72
 */

#pragma once

#include "../types.h"
#include "WallPiece.h"

#pragma push(pack, 1)

struct t3c0bdd72 : public ComplexRead {
  DT_VARIABLEARRAY<WallPiece> arPieces;
  DT_VARIABLEARRAY<WallPiece> unk_85db88e;
  DT_VARIABLEARRAY<WallPiece> unk_767477;
  DT_RANGE<DT_INT> tScale;
  DT_ENUM<DT_INT> unk_f2499b0;
  DT_RANGE<DT_INT> tHorizontalOffset;
  DT_RANGE<DT_INT> tYaw;
  DT_INT unk_609e23d;
  DT_INT unk_d8fcfe4;
  DT_INT unk_435bdfd;
  DT_INT unk_f2dbd17;
  DT_RANGE<DT_INT> tVerticalOffset;
  DT_FLOAT unk_2a8c4b6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
