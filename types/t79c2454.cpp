/**
 * Definition: t79c2454
 * Hash: 79c2454
 */

#include "t79c2454.h"

void t79c2454::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_582a697, base, ptr);
  readData(&unk_b4f614c, base, ptr);
  readData(&tFont, base, ptr);
  readData(&unk_4741819, base, ptr);
}
