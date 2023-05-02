/**
 * Definition: tbae7843e
 * Hash: bae7843e
 */

#include "tbae7843e.h"

void tbae7843e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&snoQuest, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  ptr += 0x20;
}
