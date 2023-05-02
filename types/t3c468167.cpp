/**
 * Definition: t3c468167
 * Hash: 3c468167
 */

#include "t3c468167.h"

void t3c468167::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_828d6cf, base, current);
  current = ptr + 0x14;
  readData(&unk_a7dff70, base, current);
  current = ptr + 0x18;
  readData(&tFrameAnim, base, current);
  current = ptr + 0x3c;
  readData(&fScaleUVsToFrame, base, current);
  ptr += 0x40;
}
