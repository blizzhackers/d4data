/**
 * Definition: t68a819c3
 * Hash: 68a819c3
 */

#include "t68a819c3.h"

void t68a819c3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_55bda0c, base, current);
  current = ptr + 0x10;
  readData(&unk_63b0377, base, current);
  ptr += 0x20;
}
