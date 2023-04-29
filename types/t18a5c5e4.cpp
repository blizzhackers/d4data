/**
 * Definition: t18a5c5e4
 * Hash: 18a5c5e4
 */

#include "t18a5c5e4.h"

void t18a5c5e4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_f86aafe, base, ptr);
  readData(&eBehavior, base, ptr);
  readData(&unk_d014f8b, base, ptr);
  readData(&unk_81c0263, base, ptr);
  readData(&nFadeGroup, base, ptr);
}
