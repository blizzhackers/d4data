/**
 * Definition: t4cd375c6
 * Hash: 4cd375c6
 */

#include "t4cd375c6.h"

void t4cd375c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eCompare, base, current);
  current = ptr + 0x1c;
  readData(&nValue, base, current);
  ptr += 0x20;
}
