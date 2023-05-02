/**
 * Definition: t3ae42c67
 * Hash: 3ae42c67
 */

#include "t3ae42c67.h"

void t3ae42c67::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_5187ce0, base, current);
  current = ptr + 0x10;
  readData(&unk_8cb2061, base, current);
  current = ptr + 0x14;
  readData(&unk_3a90a9d, base, current);
  current = ptr + 0x18;
  readData(&unk_e67b728, base, current);
  current = ptr + 0x1c;
  readData(&unk_e9dd8e9, base, current);
  current = ptr + 0x20;
  readData(&unk_d42692e, base, current);
  current = ptr + 0x24;
  readData(&unk_1059e8c, base, current);
  ptr += 0x28;
}
