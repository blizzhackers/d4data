/**
 * Definition: t4f086626
 * Hash: 4f086626
 */

#include "t4f086626.h"

void t4f086626::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorldState, base, current);
  current = ptr + 0x4;
  readData(&nValue, base, current);
  ptr += 0x8;
}
