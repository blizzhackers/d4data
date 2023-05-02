/**
 * Definition: t8c33d728
 * Hash: 8c33d728
 */

#include "t8c33d728.h"

void t8c33d728::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x4;
  readData(&snoDye, base, current);
  ptr += 0x8;
}
