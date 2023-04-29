/**
 * Definition: t8c14a98b
 * Hash: 8c14a98b
 */

#include "t8c14a98b.h"

void t8c14a98b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arSkillTags, base, ptr);
}
