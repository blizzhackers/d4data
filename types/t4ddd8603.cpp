/**
 * Definition: t4ddd8603
 * Hash: 4ddd8603
 */

#include "t4ddd8603.h"

void t4ddd8603::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_5ce8bfb, base, current);
  current = ptr + 0x4;
  readData(&unk_df09d6a, base, current);
  current = ptr + 0x8;
  readData(&unk_6d3dfe6, base, current);
  ptr += 0xc;
}
