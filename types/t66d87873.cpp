/**
 * Definition: t66d87873
 * Hash: 66d87873
 */

#include "t66d87873.h"

void t66d87873::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_5770323, base, current);
  current = ptr + 0x18;
  readData(&unk_441f783, base, current);
  current = ptr + 0x20;
  readData(&unk_b835d15, base, current);
  current = ptr + 0x30;
  readData(&unk_582a697, base, current);
  current = ptr + 0x40;
  readData(&unk_b4f614c, base, current);
  ptr += 0x50;
}
