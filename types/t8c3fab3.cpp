/**
 * Definition: t8c3fab3
 * Hash: 8c3fab3
 */

#include "t8c3fab3.h"

void t8c3fab3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_41f8768, base, ptr);
  readData(&eSubject, base, ptr);
}
