/**
 * Definition: t9193c653
 * Hash: 9193c653
 */

#include "t9193c653.h"

void t9193c653::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tChance, base, ptr);
  readData(&eSubject, base, ptr);
}
