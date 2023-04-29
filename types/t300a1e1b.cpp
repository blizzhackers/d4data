/**
 * Definition: t300a1e1b
 * Hash: 300a1e1b
 */

#include "t300a1e1b.h"

void t300a1e1b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_b8abd18, base, ptr);
}
