/**
 * Definition: t7cd30e23
 * Hash: 7cd30e23
 */

#include "t7cd30e23.h"

void t7cd30e23::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8c0de6e, base, current);
  current = ptr + 0x4;
  readData(&unk_e1f5441, base, current);
  ptr += 0x8;
}
