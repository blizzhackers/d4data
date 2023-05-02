/**
 * Definition: tb3f69894
 * Hash: b3f69894
 */

#include "tb3f69894.h"

void tb3f69894::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d93e026, base, current);
  current = ptr + 0x4;
  readData(&unk_a346cdd, base, current);
  ptr += 0x8;
}
