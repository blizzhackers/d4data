/**
 * Definition: t4b7fb4ab
 * Hash: 4b7fb4ab
 */

#include "t4b7fb4ab.h"

void t4b7fb4ab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bEnabled, base, current);
  current = ptr + 0x8;
  readData(&unk_440766, base, current);
  ptr += 0x18;
}
