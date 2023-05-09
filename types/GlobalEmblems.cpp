/**
 * Definition: GlobalEmblems
 * Hash: 9d10d0d6
 */

#include "GlobalEmblems.h"

void GlobalEmblems::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_40d56a2, base, current);
  ptr += 0x20;
}
