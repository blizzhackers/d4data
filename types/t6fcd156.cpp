/**
 * Definition: t6fcd156
 * Hash: 6fcd156
 */

#include "t6fcd156.h"

void t6fcd156::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flBlendTime, base, current);
  current = ptr + 0x4;
  readData(&unk_48e16cf, base, current);
  ptr += 0x8;
}
