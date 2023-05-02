/**
 * Definition: GBHandle
 * Hash: dd273b5
 */

#include "GBHandle.h"

void GBHandle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&gbid, base, current);
  ptr += 0x8;
}
