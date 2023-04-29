/**
 * Definition: t4438eb88
 * Hash: 4438eb88
 */

#include "t4438eb88.h"

void t4438eb88::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&snoUI, base, ptr);
}
