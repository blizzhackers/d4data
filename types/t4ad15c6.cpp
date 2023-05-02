/**
 * Definition: t4ad15c6
 * Hash: 4ad15c6
 */

#include "t4ad15c6.h"

void t4ad15c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_f898967, base, current);
  ptr += 0x14;
}
