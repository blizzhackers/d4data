/**
 * Definition: tf692c2c0
 * Hash: f692c2c0
 */

#include "tf692c2c0.h"

void tf692c2c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoSkillRequirement, base, current);
  ptr += 0x20;
}
