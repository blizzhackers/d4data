/**
 * Definition: AnimFacingWindow
 * Hash: ec5df525
 */

#include "AnimFacingWindow.h"

void AnimFacingWindow::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrameStart, base, current);
  current = ptr + 0x4;
  readData(&nFrameEnd, base, current);
  current = ptr + 0x8;
  readData(&unk_f28aa5a, base, current);
  current = ptr + 0xc;
  readData(&unk_963cba8, base, current);
  current = ptr + 0x10;
  readData(&unk_65d9350, base, current);
  ptr += 0x14;
}
