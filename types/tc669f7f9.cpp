/**
 * Definition: tc669f7f9
 * Hash: c669f7f9
 */

#include "tc669f7f9.h"

void tc669f7f9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_582a697, base, ptr);
  readData(&unk_b4f614c, base, ptr);
  readData(&unk_10b0379, base, ptr);
  readData(&unk_a229fbe, base, ptr);
}
