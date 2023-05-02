/**
 * Definition: t53d7a585
 * Hash: 53d7a585
 */

#include "t53d7a585.h"

void t53d7a585::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eRarity, base, current);
  current = ptr + 0x1c;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x20;
}
