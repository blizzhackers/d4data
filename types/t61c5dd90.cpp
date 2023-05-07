/**
 * Definition: t61c5dd90
 * Hash: 61c5dd90
 */

#include "t61c5dd90.h"

void t61c5dd90::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_af8195b, base, current);
  current = ptr + 0x4;
  readData(&unk_af8195c, base, current);
  current = ptr + 0x8;
  readData(&unk_af8195d, base, current);
  current = ptr + 0xc;
  readData(&tTriangle, base, current);
  ptr += 0x24;
}
