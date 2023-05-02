/**
 * Definition: t529182b6
 * Hash: 529182b6
 */

#include "t529182b6.h"

void t529182b6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_90afea4, base, current);
  current = ptr + 0x14;
  readData(&unk_4bf3f6b, base, current);
  current = ptr + 0x18;
  readData(&unk_9411612, base, current);
  current = ptr + 0x20;
  readData(&unk_b0425e7, base, current);
  ptr += 0x30;
}
