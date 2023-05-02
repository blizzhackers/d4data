/**
 * Definition: tee5a7d4a
 * Hash: ee5a7d4a
 */

#include "tee5a7d4a.h"

void tee5a7d4a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_ebf9bb4, base, current);
  current = ptr + 0x1c;
  readData(&flValue, base, current);
  ptr += 0x20;
}
