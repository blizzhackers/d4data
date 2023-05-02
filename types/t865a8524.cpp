/**
 * Definition: t865a8524
 * Hash: 865a8524
 */

#include "t865a8524.h"

void t865a8524::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  ptr += 0x4;
}
