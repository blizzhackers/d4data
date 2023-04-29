/**
 * Definition: td0012b13
 * Hash: d0012b13
 */

#include "td0012b13.h"

void td0012b13::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_70ccb7e, base, ptr);
  readData(&unk_f294e79, base, ptr);
  readData(&arKeys, base, ptr);
  readData(&unk_9717a7e, base, ptr);
}
