/**
 * Definition: tf0e6041c
 * Hash: f0e6041c
 */

#include "tf0e6041c.h"

void tf0e6041c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_5b5276a, base, current);
  ptr += 0x20;
}
