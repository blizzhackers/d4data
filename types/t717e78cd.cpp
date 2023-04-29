/**
 * Definition: t717e78cd
 * Hash: 717e78cd
 */

#include "t717e78cd.h"

void t717e78cd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nIPower, base, ptr);
}
