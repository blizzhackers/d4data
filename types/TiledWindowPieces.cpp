/**
 * Definition: TiledWindowPieces
 * Hash: 2e46583
 */

#include "TiledWindowPieces.h"

void TiledWindowPieces::read(const char* base, char* &ptr) {
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
  readData(&hCornerFrames, base, current);
  current = ptr + 0x28;
  readData(&hBackground, base, current);
  current = ptr + 0x2c;
  readData(&hLeftBorder, base, current);
  current = ptr + 0x30;
  readData(&hTopBorder, base, current);
  current = ptr + 0x34;
  readData(&hRightBorder, base, current);
  current = ptr + 0x38;
  readData(&hBottomBorder, base, current);
  current = ptr + 0x3c;
  readData(&fInsetBackground, base, current);
  current = ptr + 0x40;
  readData(&unk_2408554, base, current);
  current = ptr + 0x44;
  readData(&unk_d661bef, base, current);
  current = ptr + 0x48;
  readData(&unk_1ec53df, base, current);
  ptr += 0x50;
}
