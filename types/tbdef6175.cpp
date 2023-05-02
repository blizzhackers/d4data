/**
 * Definition: tbdef6175
 * Hash: bdef6175
 */

#include "tbdef6175.h"

void tbdef6175::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c6ddf2d, base, current);
  current = ptr + 0x4;
  readData(&snoActor, base, current);
  current = ptr + 0x2c;
  readData(&snoActor2, base, current);
  ptr += 0x54;
}
