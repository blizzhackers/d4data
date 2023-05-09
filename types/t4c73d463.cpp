/**
 * Definition: t4c73d463
 * Hash: 4c73d463
 */

#include "t4c73d463.h"

void t4c73d463::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annMonsterName, base, current);
  current = ptr + 0x18;
  readData(&snoMonster, base, current);
  current = ptr + 0x1c;
  readData(&wpLocation, base, current);
  current = ptr + 0x28;
  readData(&bRemove, base, current);
  ptr += 0x2c;
}
