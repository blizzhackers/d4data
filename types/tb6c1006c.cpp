/**
 * Definition: tb6c1006c
 * Hash: b6c1006c
 */

#include "tb6c1006c.h"

void tb6c1006c::read(const char* base, char* &ptr) {
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
  current = ptr + 0x40;
  readData(&unk_f7b62d6, base, current);
  current = ptr + 0x78;
  readData(&tDuration, base, current);
  current = ptr + 0x80;
  readData(&fScaleUVsToFrame, base, current);
  ptr += 0x88;
}
