/**
 * Definition: t30f99fc2
 * Hash: 30f99fc2
 */

#include "t30f99fc2.h"

void t30f99fc2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPrefix, base, current);
  current = ptr + 0x4;
  readData(&snoSuffix, base, current);
  ptr += 0x8;
}
