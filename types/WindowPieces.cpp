/**
 * Definition: WindowPieces
 * Hash: 8e00f391
 */

#include "WindowPieces.h"

void WindowPieces::read(const char* base, char* &ptr) {
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
  readData(&hBkgrnd, base, current);
  current = ptr + 0x1c;
  readData(&hBorder, base, current);
  current = ptr + 0x20;
  readData(&hCorner, base, current);
  ptr += 0x28;
}
