/**
 * Definition: t64920d0e
 * Hash: 64920d0e
 */

#include "t64920d0e.h"

void t64920d0e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
}
