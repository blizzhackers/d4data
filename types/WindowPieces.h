/**
 * Definition: WindowPieces
 * Hash: 8e00f391
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WindowPieces : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_UINT hBkgrnd;
  DT_UINT hBorder;
  DT_UINT hCorner;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
