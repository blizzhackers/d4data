/**
 * Definition: ted5b6d19
 * Hash: ed5b6d19
 */

#include "ted5b6d19.h"

void ted5b6d19::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&unk_49ab17c, base, current);
  ptr += 0x38;
}
