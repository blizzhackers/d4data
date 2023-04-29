/**
 * Definition: tacd4f08e
 * Hash: acd4f08e
 */

#include "tacd4f08e.h"

void tacd4f08e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
  readData(&nValue, base, ptr);
}
