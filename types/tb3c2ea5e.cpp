/**
 * Definition: tb3c2ea5e
 * Hash: b3c2ea5e
 */

#include "tb3c2ea5e.h"

void tb3c2ea5e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e38abf, base, current);
  current = ptr + 0x4;
  readData(&eTileType, base, current);
  ptr += 0x8;
}
