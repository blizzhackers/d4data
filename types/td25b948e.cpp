/**
 * Definition: td25b948e
 * Hash: d25b948e
 */

#include "td25b948e.h"

void td25b948e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3c9c8ca, base, ptr);
}
