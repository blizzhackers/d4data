/**
 * Definition: tf87e21c
 * Hash: f87e21c
 */

#include "tf87e21c.h"

void tf87e21c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  ptr += 0x30;
}
