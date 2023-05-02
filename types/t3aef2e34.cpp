/**
 * Definition: t3aef2e34
 * Hash: 3aef2e34
 */

#include "t3aef2e34.h"

void t3aef2e34::read(const char* base, char* &ptr) {
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
