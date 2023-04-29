/**
 * Definition: tb6c1006c
 * Hash: b6c1006c
 */

#include "tb6c1006c.h"

void tb6c1006c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_828d6cf, base, ptr);
  readData(&unk_a7dff70, base, ptr);
  readData(&tFrameAnim, base, ptr);
  readData(&unk_f7b62d6, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&fScaleUVsToFrame, base, ptr);
}
