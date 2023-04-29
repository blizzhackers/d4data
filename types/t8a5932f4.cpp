/**
 * Definition: t8a5932f4
 * Hash: 8a5932f4
 */

#include "t8a5932f4.h"

void t8a5932f4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_582a697, base, ptr);
  readData(&unk_b4f614c, base, ptr);
  readData(&unk_4cce0b6, base, ptr);
  readData(&tFont, base, ptr);
  readData(&unk_59693f9, base, ptr);
}
