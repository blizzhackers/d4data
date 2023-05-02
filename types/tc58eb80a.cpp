/**
 * Definition: tc58eb80a
 * Hash: c58eb80a
 */

#include "tc58eb80a.h"

void tc58eb80a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x8;
  readData(&unk_fdbe9d6, base, current);
  ptr += 0x20;
}
