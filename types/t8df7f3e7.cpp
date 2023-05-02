/**
 * Definition: t8df7f3e7
 * Hash: 8df7f3e7
 */

#include "t8df7f3e7.h"

void t8df7f3e7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_4016e2c, base, current);
  current = ptr + 0x14;
  readData(&unk_70b9617, base, current);
  ptr += 0x18;
}
