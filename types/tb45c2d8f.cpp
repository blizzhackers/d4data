/**
 * Definition: tb45c2d8f
 * Hash: b45c2d8f
 */

#include "tb45c2d8f.h"

void tb45c2d8f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_9de2896, base, current);
  current = ptr + 0x14;
  readData(&arTransmogs, base, current);
  ptr += 0x118;
}
