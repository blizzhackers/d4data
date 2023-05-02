/**
 * Definition: t3b2abece
 * Hash: 3b2abece
 */

#include "t3b2abece.h"

void t3b2abece::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoStoryboard, base, current);
  ptr += 0x20;
}
