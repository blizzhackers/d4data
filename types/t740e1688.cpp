/**
 * Definition: t740e1688
 * Hash: 740e1688
 */

#include "t740e1688.h"

void t740e1688::read(const char* base, char* &ptr) {
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
  readData(&unk_172e19a, base, ptr);
}
