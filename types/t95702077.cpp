/**
 * Definition: t95702077
 * Hash: 95702077
 */

#include "t95702077.h"

void t95702077::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f2e7542, base, current);
  current = ptr + 0x4;
  readData(&unk_50ce6c8, base, current);
  current = ptr + 0x8;
  readData(&unk_14b5ec9, base, current);
  current = ptr + 0xc;
  readData(&unk_aae71b4, base, current);
  ptr += 0x10;
}
