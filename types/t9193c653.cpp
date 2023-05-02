/**
 * Definition: t9193c653
 * Hash: 9193c653
 */

#include "t9193c653.h"

void t9193c653::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tChance, base, current);
  current = ptr + 0x38;
  readData(&eSubject, base, current);
  ptr += 0x40;
}
