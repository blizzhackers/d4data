/**
 * Definition: VertTiledWindowPieces
 * Hash: 6bfed904
 */

#include "VertTiledWindowPieces.h"

void VertTiledWindowPieces::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_362349d, base, current);
  current = ptr + 0x14;
  readData(&nPadding, base, current);
  current = ptr + 0x18;
  readData(&hPieceTop, base, current);
  current = ptr + 0x1c;
  readData(&hPieceBottom, base, current);
  current = ptr + 0x20;
  readData(&unk_4b5cdbd, base, current);
  ptr += 0x28;
}
