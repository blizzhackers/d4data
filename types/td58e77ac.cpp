/**
 * Definition: td58e77ac
 * Hash: d58e77ac
 */

#include "td58e77ac.h"

void td58e77ac::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_68a1111, base, current);
  current = ptr + 0x4;
  readData(&unk_ac3832f, base, current);
  current = ptr + 0x8;
  readData(&gbidPetType, base, current);
  current = ptr + 0xc;
  readData(&hIconOverride, base, current);
  current = ptr + 0x10;
  readData(&unk_f9268e5, base, current);
  ptr += 0x118;
}
