/**
 * Definition: t80fa3567
 * Hash: 80fa3567
 */

#include "t80fa3567.h"

void t80fa3567::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bWrapSelection, base, current);
  current = ptr + 0x4;
  readData(&unk_a27d70b, base, current);
  current = ptr + 0x8;
  readData(&unk_f110353, base, current);
  current = ptr + 0xc;
  readData(&unk_72a545b, base, current);
  current = ptr + 0x10;
  readData(&unk_3f72ed9, base, current);
  current = ptr + 0x14;
  readData(&unk_707e4bc, base, current);
  current = ptr + 0x18;
  readData(&unk_a321618, base, current);
  current = ptr + 0x28;
  readData(&unk_74f3f9, base, current);
  ptr += 0x38;
}
