/**
 * Definition: t23a7215d
 * Hash: 23a7215d
 */

#include "t23a7215d.h"

void t23a7215d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_bf69fb1, base, current);
  current = ptr + 0x4;
  readData(&unk_2387505, base, current);
  ptr += 0x8;
}
