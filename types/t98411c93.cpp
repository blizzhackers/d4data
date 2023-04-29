/**
 * Definition: t98411c93
 * Hash: 98411c93
 */

#include "t98411c93.h"

void t98411c93::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_86c2785, base, ptr);
}
