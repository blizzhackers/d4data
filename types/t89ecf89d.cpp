/**
 * Definition: t89ecf89d
 * Hash: 89ecf89d
 */

#include "t89ecf89d.h"

void t89ecf89d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e5e7bd4, base, current);
  current = ptr + 0x10;
  readData(&unk_a750be3, base, current);
  current = ptr + 0x14;
  readData(&unk_af0baa5, base, current);
  current = ptr + 0x18;
  readData(&unk_766f08, base, current);
  ptr += 0x28;
}
