/**
 * Definition: tb1bdda39
 * Hash: b1bdda39
 */

#include "tb1bdda39.h"

void tb1bdda39::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_9b2bc26, base, current);
  current = ptr + 0x30;
  readData(&unk_77ed19a, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  ptr += 0x38;
}
