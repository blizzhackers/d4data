/**
 * Definition: t16e3cafe
 * Hash: 16e3cafe
 */

#include "t16e3cafe.h"

void t16e3cafe::read(const char* base, char* &ptr) {
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
