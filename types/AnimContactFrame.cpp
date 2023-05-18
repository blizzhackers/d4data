/**
 * Definition: AnimContactFrame
 * Hash: e050809c
 */

#include "AnimContactFrame.h"

void AnimContactFrame::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrameNumber, base, current);
  current = ptr + 0x4;
  readData(&vLocalOffset, base, current);
  ptr += 0x10;
}
