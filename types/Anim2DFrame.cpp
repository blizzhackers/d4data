/**
 * Definition: Anim2DFrame
 * Hash: a4d7e8e6
 */

#include "Anim2DFrame.h"

void Anim2DFrame::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hImage, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  ptr += 0x8;
}
