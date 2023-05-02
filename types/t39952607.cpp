/**
 * Definition: t39952607
 * Hash: 39952607
 */

#include "t39952607.h"

void t39952607::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_abc49ac, base, current);
  current = ptr + 0x8;
  readData(&unk_81dd55e, base, current);
  ptr += 0x18;
}
