/**
 * Definition: t96f079c
 * Hash: 96f079c
 */

#include "t96f079c.h"

void t96f079c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&iConsoleQuest, base, current);
  ptr += 0x50;
}
