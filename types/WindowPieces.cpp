/**
 * Definition: WindowPieces
 * Hash: 8e00f391
 */

#include "WindowPieces.h"

void WindowPieces::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&hBkgrnd, base, ptr);
  readData(&hBorder, base, ptr);
  readData(&hCorner, base, ptr);
}
