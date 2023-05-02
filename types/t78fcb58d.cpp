/**
 * Definition: t78fcb58d
 * Hash: 78fcb58d
 */

#include "t78fcb58d.h"

void t78fcb58d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szLogString, base, current);
  ptr += 0x3f8;
}
