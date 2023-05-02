/**
 * Definition: t7ed5a9ea
 * Hash: 7ed5a9ea
 */

#include "t7ed5a9ea.h"

void t7ed5a9ea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x8;
  readData(&snoWorldState, base, current);
  current = ptr + 0xc;
  readData(&nValue, base, current);
  current = ptr + 0x10;
  readData(&snoScene, base, current);
  ptr += 0x14;
}
