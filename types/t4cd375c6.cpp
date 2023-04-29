/**
 * Definition: t4cd375c6
 * Hash: 4cd375c6
 */

#include "t4cd375c6.h"

void t4cd375c6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eCompare, base, ptr);
  readData(&nValue, base, ptr);
}
