/**
 * Definition: t87803841
 * Hash: 87803841
 */

#include "t87803841.h"

void t87803841::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_76daef5, base, current);
  current = ptr + 0x4;
  readData(&unk_37f3d0e, base, current);
  ptr += 0x8;
}
