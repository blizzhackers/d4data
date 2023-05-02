/**
 * Definition: t8c14a98b
 * Hash: 8c14a98b
 */

#include "t8c14a98b.h"

void t8c14a98b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&arSkillTags, base, current);
  ptr += 0x28;
}
