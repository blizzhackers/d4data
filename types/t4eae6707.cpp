/**
 * Definition: t4eae6707
 * Hash: 4eae6707
 */

#include "t4eae6707.h"

void t4eae6707::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  ptr += 0x1c;
}
