/**
 * Definition: t76981070
 * Hash: 76981070
 */

#include "t76981070.h"

void t76981070::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&uBlobSize, base, current);
  ptr += 0x1c;
}
