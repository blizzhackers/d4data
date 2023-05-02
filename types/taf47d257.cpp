/**
 * Definition: taf47d257
 * Hash: af47d257
 */

#include "taf47d257.h"

void taf47d257::read(const char* base, char* &ptr) {
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
  readData(&eDamageType, base, current);
  current = ptr + 0x20;
  readData(&unk_9d0a7aa, base, current);
  ptr += 0x28;
}
