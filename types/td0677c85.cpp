/**
 * Definition: td0677c85
 * Hash: d0677c85
 */

#include "td0677c85.h"

void td0677c85::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&tCameraState, base, current);
  ptr += 0x44;
}
