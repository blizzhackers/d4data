/**
 * Definition: td7468ee4
 * Hash: d7468ee4
 */

#include "td7468ee4.h"

void td7468ee4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_f2e68d4, base, ptr);
}
