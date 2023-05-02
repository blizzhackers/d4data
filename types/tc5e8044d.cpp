/**
 * Definition: tc5e8044d
 * Hash: c5e8044d
 */

#include "tc5e8044d.h"

void tc5e8044d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_30e0427, base, current);
  current = ptr + 0x4;
  readData(&unk_2130773, base, current);
  current = ptr + 0x8;
  readData(&unk_1149cd2, base, current);
  current = ptr + 0xc;
  readData(&unk_10405ce, base, current);
  current = ptr + 0x10;
  readData(&unk_96134cc, base, current);
  current = ptr + 0x14;
  readData(&unk_498cae5, base, current);
  ptr += 0x18;
}
