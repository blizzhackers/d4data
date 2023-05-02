/**
 * Definition: t2d02bd94
 * Hash: 2d02bd94
 */

#include "t2d02bd94.h"

void t2d02bd94::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_7ccd73, base, current);
  current = ptr + 0x4;
  readData(&unk_cab4517, base, current);
  ptr += 0x8;
}
