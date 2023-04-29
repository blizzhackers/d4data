/**
 * Definition: t9b22bbf3
 * Hash: 9b22bbf3
 */

#include "t9b22bbf3.h"

void t9b22bbf3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&unk_8d0003e, base, ptr);
}
