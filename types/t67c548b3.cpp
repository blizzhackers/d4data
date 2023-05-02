/**
 * Definition: t67c548b3
 * Hash: 67c548b3
 */

#include "t67c548b3.h"

void t67c548b3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_dce541c, base, current);
  ptr += 0x18;
}
