/**
 * Definition: t5943238d
 * Hash: 5943238d
 */

#include "t5943238d.h"

void t5943238d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&unk_f265759, base, ptr);
  readData(&unk_4600a2c, base, ptr);
  readData(&unk_4b5cdbd, base, ptr);
}
