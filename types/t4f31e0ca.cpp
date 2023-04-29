/**
 * Definition: t4f31e0ca
 * Hash: 4f31e0ca
 */

#include "t4f31e0ca.h"

void t4f31e0ca::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tHardpointLink, base, ptr);
  readData(&eFootstepType, base, ptr);
  readData(&unk_5de393e, base, ptr);
  readData(&unk_a32d8d5, base, ptr);
  readData(&unk_522f94d, base, ptr);
}
