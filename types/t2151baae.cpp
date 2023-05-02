/**
 * Definition: t2151baae
 * Hash: 2151baae
 */

#include "t2151baae.h"

void t2151baae::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoSound, base, current);
  ptr += 0x20;
}
