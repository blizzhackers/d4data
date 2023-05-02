/**
 * Definition: t13ed7c61
 * Hash: 13ed7c61
 */

#include "t13ed7c61.h"

void t13ed7c61::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoGizmo, base, current);
  current = ptr + 0x14;
  readData(&wpLocation, base, current);
  current = ptr + 0x20;
  readData(&unk_1751d86, base, current);
  ptr += 0x24;
}
