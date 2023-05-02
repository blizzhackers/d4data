/**
 * Definition: t48f5e019
 * Hash: 48f5e019
 */

#include "t48f5e019.h"

void t48f5e019::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_cee34d8, base, current);
  current = ptr + 0x14;
  readData(&eRotation, base, current);
  current = ptr + 0x18;
  readData(&unk_9b6955a, base, current);
  ptr += 0x1c;
}
