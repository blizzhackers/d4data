/**
 * Definition: tfac0f318
 * Hash: fac0f318
 */

#include "tfac0f318.h"

void tfac0f318::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c58ef7e, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  current = ptr + 0x8;
  readData(&unk_3cdcdff, base, current);
  current = ptr + 0xc;
  readData(&unk_74b9406, base, current);
  current = ptr + 0x10;
  readData(&unk_a7a54fd, base, current);
  current = ptr + 0x14;
  readData(&unk_cc1b6cc, base, current);
  current = ptr + 0x18;
  readData(&unk_b71059, base, current);
  ptr += 0x1c;
}
