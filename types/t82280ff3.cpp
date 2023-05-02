/**
 * Definition: t82280ff3
 * Hash: 82280ff3
 */

#include "t82280ff3.h"

void t82280ff3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&unk_86c2785, base, current);
  ptr += 0x8;
}
