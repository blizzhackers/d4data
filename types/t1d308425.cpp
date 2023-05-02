/**
 * Definition: t1d308425
 * Hash: 1d308425
 */

#include "t1d308425.h"

void t1d308425::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4d19a78, base, current);
  current = ptr + 0x4;
  readData(&unk_fbf1c84, base, current);
  current = ptr + 0x8;
  readData(&unk_df0475a, base, current);
  current = ptr + 0xc;
  readData(&unk_fafa236, base, current);
  current = ptr + 0x10;
  readData(&unk_8d8113a, base, current);
  current = ptr + 0x14;
  readData(&unk_d8d6cc9, base, current);
  current = ptr + 0x18;
  readData(&unk_503df13, base, current);
  ptr += 0x20;
}
