/**
 * Definition: t8cdc9da5
 * Hash: 8cdc9da5
 */

#include "t8cdc9da5.h"

void t8cdc9da5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoSubzone, base, current);
  current = ptr + 0x14;
  readData(&uPlayerCount, base, current);
  ptr += 0x18;
}
