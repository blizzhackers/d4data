/**
 * Definition: tcc5838a
 * Hash: cc5838a
 */

#include "tcc5838a.h"

void tcc5838a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&transform, base, current);
  current = ptr + 0x20;
  readData(&unk_644027a, base, current);
  current = ptr + 0x24;
  readData(&unk_83cc220, base, current);
  current = ptr + 0x2c;
  readData(&unk_81a5ef8, base, current);
  current = ptr + 0x30;
  readData(&unk_2e8bbc0, base, current);
  current = ptr + 0x38;
  readData(&unk_2cc466b, base, current);
  current = ptr + 0x3c;
  readData(&unk_375223b, base, current);
  ptr += 0x40;
}
