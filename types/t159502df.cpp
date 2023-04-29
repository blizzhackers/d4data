/**
 * Definition: t159502df
 * Hash: 159502df
 */

#include "t159502df.h"

void t159502df::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
