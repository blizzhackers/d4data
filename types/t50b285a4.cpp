/**
 * Definition: t50b285a4
 * Hash: 50b285a4
 */

#include "t50b285a4.h"

void t50b285a4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  ptr += 0x1c;
}
