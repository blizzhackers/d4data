/**
 * Definition: t97a9c2d4
 * Hash: 97a9c2d4
 */

#include "t97a9c2d4.h"

void t97a9c2d4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eRarity, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
