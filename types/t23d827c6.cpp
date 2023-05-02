/**
 * Definition: t23d827c6
 * Hash: 23d827c6
 */

#include "t23d827c6.h"

void t23d827c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoSubzone, base, current);
  current = ptr + 0x14;
  readData(&uEntranceGUID, base, current);
  ptr += 0x18;
}
