/**
 * Definition: VertTiledWindowPieces
 * Hash: 6bfed904
 */

#include "VertTiledWindowPieces.h"

void VertTiledWindowPieces::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&hPieceTop, base, ptr);
  readData(&hPieceBottom, base, ptr);
  readData(&unk_4b5cdbd, base, ptr);
}
