/**
 * Definition: Transmog
 * Hash: b754c22b
 */

#include "Transmog.h"

void Transmog::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x4;
  readData(&snoDye, base, current);
  ptr += 0x8;
}
