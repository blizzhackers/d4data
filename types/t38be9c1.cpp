/**
 * Definition: t38be9c1
 * Hash: 38be9c1
 */

#include "t38be9c1.h"

void t38be9c1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tValue, base, ptr);
  readData(&unk_6ca113c, base, ptr);
}
