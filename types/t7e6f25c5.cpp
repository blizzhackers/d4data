/**
 * Definition: t7e6f25c5
 * Hash: 7e6f25c5
 */

#include "t7e6f25c5.h"

void t7e6f25c5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoActor, base, current);
  current = ptr + 0x14;
  readData(&snoDeathOverride, base, current);
  current = ptr + 0x18;
  readData(&uCount, base, current);
  ptr += 0x1c;
}
