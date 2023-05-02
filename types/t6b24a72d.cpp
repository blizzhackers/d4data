/**
 * Definition: t6b24a72d
 * Hash: 6b24a72d
 */

#include "t6b24a72d.h"

void t6b24a72d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoItemType, base, current);
  current = ptr + 0x18;
  readData(&nNewLevel, base, current);
  ptr += 0x1c;
}
