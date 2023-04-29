/**
 * Definition: te6159e04
 * Hash: e6159e04
 */

#include "te6159e04.h"

void te6159e04::read(const char* base, char* &ptr) {
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
  readData(&tIcon, base, ptr);
  readData(&unk_4cce0b6, base, ptr);
  readData(&unk_10f81f0, base, ptr);
}
