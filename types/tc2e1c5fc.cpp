/**
 * Definition: tc2e1c5fc
 * Hash: c2e1c5fc
 */

#include "tc2e1c5fc.h"

void tc2e1c5fc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoEffect, base, current);
  current = ptr + 0x4;
  readData(&unk_f63dc45, base, current);
  current = ptr + 0x8;
  readData(&unk_a4ec910, base, current);
  current = ptr + 0xc;
  readData(&unk_52ba359, base, current);
  current = ptr + 0x10;
  readData(&unk_430ecb0, base, current);
  current = ptr + 0x14;
  readData(&unk_7f9788f, base, current);
  ptr += 0x18;
}
