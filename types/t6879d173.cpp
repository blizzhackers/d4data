/**
 * Definition: t6879d173
 * Hash: 6879d173
 */

#include "t6879d173.h"

void t6879d173::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&uData, base, current);
  ptr += 0x20;
}
