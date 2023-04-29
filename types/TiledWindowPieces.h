/**
 * Definition: TiledWindowPieces
 * Hash: 2e46583
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TiledWindowPieces : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_FIXEDARRAY<DT_UINT, 4> hCornerFrames;
  DT_UINT hBackground;
  DT_UINT hLeftBorder;
  DT_UINT hTopBorder;
  DT_UINT hRightBorder;
  DT_UINT hBottomBorder;
  DT_INT fInsetBackground;
  DT_INT unk_2408554;
  DT_INT unk_d661bef;
  DT_INT unk_1ec53df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
