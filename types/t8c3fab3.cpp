/**
 * Definition: t8c3fab3
 * Hash: 8c3fab3
 */

#include "t8c3fab3.h"

void t8c3fab3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_41f8768, base, current);
  current = ptr + 0x1c;
  readData(&eSubject, base, current);
  ptr += 0x20;
}
