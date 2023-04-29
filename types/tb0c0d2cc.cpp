/**
 * Definition: tb0c0d2cc
 * Hash: b0c0d2cc
 */

#include "tb0c0d2cc.h"

void tb0c0d2cc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_582a697, base, ptr);
  readData(&unk_b4f614c, base, ptr);
  readData(&unk_6f50cd1, base, ptr);
}
