/**
 * Definition: tbc0d579e
 * Hash: bc0d579e
 */

#include "tbc0d579e.h"

void tbc0d579e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&unk_87704fc, base, ptr);
  readData(&unk_efeb206, base, ptr);
  readData(&unk_da48774, base, ptr);
  readData(&unk_c69f784, base, ptr);
  readData(&unk_b9d90d5, base, ptr);
  readData(&unk_d661bef, base, ptr);
  readData(&unk_1ec53df, base, ptr);
}
