/**
 * Definition: tb0f2a959
 * Hash: b0f2a959
 */

#include "tb0f2a959.h"

void tb0f2a959::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_1bdcc9f, base, current);
  ptr += 0x14;
}
