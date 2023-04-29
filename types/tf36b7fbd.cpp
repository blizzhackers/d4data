/**
 * Definition: tf36b7fbd
 * Hash: f36b7fbd
 */

#include "tf36b7fbd.h"

void tf36b7fbd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoParagonNode, base, ptr);
}
