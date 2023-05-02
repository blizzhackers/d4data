/**
 * Definition: t357c091e
 * Hash: 357c091e
 */

#include "t357c091e.h"

void t357c091e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_20a6d7a, base, current);
  current = ptr + 0xc;
  readData(&unk_9fd3bed, base, current);
  ptr += 0x18;
}
