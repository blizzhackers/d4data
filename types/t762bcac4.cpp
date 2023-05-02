/**
 * Definition: t762bcac4
 * Hash: 762bcac4
 */

#include "t762bcac4.h"

void t762bcac4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&snoMask, base, current);
  current = ptr + 0x10;
  readData(&hIcon, base, current);
  ptr += 0x14;
}
