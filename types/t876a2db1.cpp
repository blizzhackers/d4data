/**
 * Definition: t876a2db1
 * Hash: 876a2db1
 */

#include "t876a2db1.h"

void t876a2db1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoPower, base, current);
  current = ptr + 0x14;
  readData(&nSlot, base, current);
  ptr += 0x18;
}
