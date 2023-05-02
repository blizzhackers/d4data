/**
 * Definition: t9b22bbf3
 * Hash: 9b22bbf3
 */

#include "t9b22bbf3.h"

void t9b22bbf3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x20;
  readData(&unk_8d0003e, base, current);
  ptr += 0x30;
}
