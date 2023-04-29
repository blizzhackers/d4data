/**
 * Definition: t6fb40ed3
 * Hash: 6fb40ed3
 */

#include "t6fb40ed3.h"

void t6fb40ed3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_668d971, base, ptr);
  readData(&flBlendTime, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_279aa5a, base, ptr);
}
