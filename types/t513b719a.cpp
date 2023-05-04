/**
 * Definition: t513b719a
 * Hash: 513b719a
 */

#include "t513b719a.h"

void t513b719a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidDungeonState, base, current);
  current = ptr + 0x4;
  readData(&bNegate, base, current);
  ptr += 0x8;
}
