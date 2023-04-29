/**
 * Definition: TiledWindowPieces
 * Hash: 2e46583
 */

#include "TiledWindowPieces.h"

void TiledWindowPieces::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&hCornerFrames, base, ptr);
  readData(&hBackground, base, ptr);
  readData(&hLeftBorder, base, ptr);
  readData(&hTopBorder, base, ptr);
  readData(&hRightBorder, base, ptr);
  readData(&hBottomBorder, base, ptr);
  readData(&fInsetBackground, base, ptr);
  readData(&unk_2408554, base, ptr);
  readData(&unk_d661bef, base, ptr);
  readData(&unk_1ec53df, base, ptr);
}
