/**
 * Definition: t69df3ce9
 * Hash: 69df3ce9
 */

#include "t69df3ce9.h"

void t69df3ce9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&nItemCount, base, ptr);
}
