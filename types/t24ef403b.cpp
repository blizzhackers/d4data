/**
 * Definition: t24ef403b
 * Hash: 24ef403b
 */

#include "t24ef403b.h"

void t24ef403b::read(const char* base, char* &ptr) {
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
  readData(&snoAffix, base, current);
  ptr += 0x20;
}
