/**
 * Definition: t25158c6
 * Hash: 25158c6
 */

#include "t25158c6.h"

void t25158c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoLevelArea, base, current);
  ptr += 0x14;
}
