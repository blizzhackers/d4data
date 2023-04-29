/**
 * Definition: t3c468167
 * Hash: 3c468167
 */

#include "t3c468167.h"

void t3c468167::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_828d6cf, base, ptr);
  readData(&unk_a7dff70, base, ptr);
  readData(&tFrameAnim, base, ptr);
  readData(&fScaleUVsToFrame, base, ptr);
}
