/**
 * Definition: tbdc45559
 * Hash: bdc45559
 */

#include "tbdc45559.h"

void tbdc45559::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x18;
}
