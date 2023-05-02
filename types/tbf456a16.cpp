/**
 * Definition: tbf456a16
 * Hash: bf456a16
 */

#include "tbf456a16.h"

void tbf456a16::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nIndexOffset, base, current);
  current = ptr + 0x4;
  readData(&nIndexCount, base, current);
  ptr += 0x8;
}
