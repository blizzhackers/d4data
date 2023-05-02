/**
 * Definition: t72bd65f8
 * Hash: 72bd65f8
 */

#include "t72bd65f8.h"

void t72bd65f8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uToken, base, current);
  ptr += 0x14;
}
