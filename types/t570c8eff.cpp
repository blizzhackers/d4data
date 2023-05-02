/**
 * Definition: t570c8eff
 * Hash: 570c8eff
 */

#include "t570c8eff.h"

void t570c8eff::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPlayer, base, current);
  current = ptr + 0x18;
  readData(&unk_da5b2a0, base, current);
  ptr += 0x1c;
}
