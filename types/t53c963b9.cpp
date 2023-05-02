/**
 * Definition: t53c963b9
 * Hash: 53c963b9
 */

#include "t53c963b9.h"

void t53c963b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x14;
  readData(&unk_a54c2e0, base, current);
  ptr += 0x1c;
}
