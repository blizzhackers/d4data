/**
 * Definition: VertTiledWindowPieces
 * Hash: 6bfed904
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct VertTiledWindowPieces : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_UINT hPieceTop;
  DT_UINT hPieceBottom;
  DT_UINT unk_4b5cdbd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
