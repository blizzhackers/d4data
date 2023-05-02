/**
 * Definition: tb2ef091a
 * Hash: b2ef091a
 */

#include "tb2ef091a.h"

void tb2ef091a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6b62d24, base, current);
  current = ptr + 0x4;
  readData(&unk_2a51399, base, current);
  ptr += 0x8;
}
