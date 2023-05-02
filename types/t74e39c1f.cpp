/**
 * Definition: t74e39c1f
 * Hash: 74e39c1f
 */

#include "t74e39c1f.h"

void t74e39c1f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_993dfc2, base, current);
  current = ptr + 0x14;
  readData(&tTransform, base, current);
  ptr += 0x30;
}
