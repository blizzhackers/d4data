/**
 * Definition: ted096762
 * Hash: ed096762
 */

#include "ted096762.h"

void ted096762::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&transform, base, current);
  ptr += 0x2c;
}
