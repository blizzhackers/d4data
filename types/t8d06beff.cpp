/**
 * Definition: t8d06beff
 * Hash: 8d06beff
 */

#include "t8d06beff.h"

void t8d06beff::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoAchievement, base, current);
  ptr += 0x14;
}
