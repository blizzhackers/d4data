/**
 * Definition: tff4098b9
 * Hash: ff4098b9
 */

#include "tff4098b9.h"

void tff4098b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a82b496, base, current);
  current = ptr + 0x10;
  readData(&unk_7fc1b58, base, current);
  current = ptr + 0x18;
  readData(&unk_cc11a8e, base, current);
  ptr += 0x28;
}
