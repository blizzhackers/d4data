/**
 * Definition: t998a6b26
 * Hash: 998a6b26
 */

#include "t998a6b26.h"

void t998a6b26::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&flRadius, base, current);
  ptr += 0x1c;
}
