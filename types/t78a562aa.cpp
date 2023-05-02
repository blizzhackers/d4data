/**
 * Definition: t78a562aa
 * Hash: 78a562aa
 */

#include "t78a562aa.h"

void t78a562aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arSlots, base, current);
  current = ptr + 0x10;
  readData(&arPowers, base, current);
  ptr += 0x20;
}
