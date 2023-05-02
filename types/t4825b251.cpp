/**
 * Definition: t4825b251
 * Hash: 4825b251
 */

#include "t4825b251.h"

void t4825b251::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorldState, base, current);
  current = ptr + 0x14;
  readData(&nValue, base, current);
  ptr += 0x18;
}
