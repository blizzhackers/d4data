/**
 * Definition: tbef5a4a
 * Hash: bef5a4a
 */

#include "tbef5a4a.h"

void tbef5a4a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nX, base, current);
  current = ptr + 0x4;
  readData(&nY, base, current);
  current = ptr + 0x8;
  readData(&unk_2ec05dd, base, current);
  ptr += 0x18;
}
