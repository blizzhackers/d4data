/**
 * Definition: td647c13d
 * Hash: d647c13d
 */

#include "td647c13d.h"

void td647c13d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
}
