/**
 * Definition: t42378b43
 * Hash: 42378b43
 */

#include "t42378b43.h"

void t42378b43::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a952693, base, current);
  current = ptr + 0x4;
  readData(&vecGridOffset, base, current);
  current = ptr + 0x10;
  readData(&unk_1e8e20d, base, current);
  ptr += 0x14;
}
