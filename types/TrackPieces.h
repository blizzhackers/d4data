/**
 * Definition: TrackPieces
 * Hash: fe95772e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TrackPieces : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_FIXEDARRAY<DT_UINT, 3> hPieceFrame;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
