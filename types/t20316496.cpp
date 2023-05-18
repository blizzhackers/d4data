/**
 * Definition: t20316496
 * Hash: 20316496
 */

#include "t20316496.h"

void t20316496::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_e7b35bd, base, current);
  current = ptr + 0x14;
  readData(&unk_c3afaa0, base, current);
  current = ptr + 0x18;
  readData(&ptIKBones, base, current);
  ptr += 0x28;
}
