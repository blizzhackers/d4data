/**
 * Definition: t35789a1c
 * Hash: 35789a1c
 */

#include "t35789a1c.h"

void t35789a1c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5a84245, base, ptr);
  readData(&unk_b77ac70, base, ptr);
  readData(&unk_83a373, base, ptr);
  readData(&unk_2d36569, base, ptr);
  readData(&unk_3a0e4a2, base, ptr);
  readData(&unk_7f27ec0, base, ptr);
  readData(&unk_980ba0f, base, ptr);
}
