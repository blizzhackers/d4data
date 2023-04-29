/**
 * Definition: t3651bad5
 * Hash: 3651bad5
 */

#include "t3651bad5.h"

void t3651bad5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tHardpointLink, base, ptr);
  readData(&unk_da88a, base, ptr);
  readData(&unk_2539ee0, base, ptr);
  readData(&unk_e6137fe, base, ptr);
  readData(&unk_a075de4, base, ptr);
  readData(&dwID, base, ptr);
  readData(&tCleanup, base, ptr);
}
