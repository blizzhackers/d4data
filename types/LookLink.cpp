/**
 * Definition: LookLink
 * Hash: 8eb3e043
 */

#include "LookLink.h"

void LookLink::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwLookHash, base, current);
  ptr += 0x4;
}
