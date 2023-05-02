/**
 * Definition: t65bf373b
 * Hash: 65bf373b
 */

#include "t65bf373b.h"

void t65bf373b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nNewLevel, base, current);
  current = ptr + 0x14;
  readData(&nMaxLevel, base, current);
  current = ptr + 0x18;
  readData(&snoItem, base, current);
  ptr += 0x1c;
}
