/**
 * Definition: te7ead32b
 * Hash: e7ead32b
 */

#include "te7ead32b.h"

void te7ead32b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d1095b1, base, current);
  current = ptr + 0x4;
  readData(&flScale, base, current);
  current = ptr + 0x8;
  readData(&unk_adeec18, base, current);
  current = ptr + 0xc;
  readData(&unk_c1e1359, base, current);
  current = ptr + 0x10;
  readData(&unk_479eba2, base, current);
  current = ptr + 0x2c;
  readData(&unk_fc35c24, base, current);
  current = ptr + 0x30;
  readData(&unk_60a2e66, base, current);
  current = ptr + 0x38;
  readData(&unk_cf074e3, base, current);
  ptr += 0x48;
}
