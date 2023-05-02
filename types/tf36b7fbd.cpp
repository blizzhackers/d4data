/**
 * Definition: tf36b7fbd
 * Hash: f36b7fbd
 */

#include "tf36b7fbd.h"

void tf36b7fbd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&snoParagonNode, base, current);
  ptr += 0x20;
}
