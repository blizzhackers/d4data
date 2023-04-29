/**
 * Definition: t999ca9a3
 * Hash: 999ca9a3
 */

#include "t999ca9a3.h"

void t999ca9a3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_4688828, base, ptr);
}
