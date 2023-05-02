/**
 * Definition: t65341e8d
 * Hash: 65341e8d
 */

#include "t65341e8d.h"

void t65341e8d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&unk_766f08, base, current);
  ptr += 0x118;
}
