/**
 * Definition: t89efac1a
 * Hash: 89efac1a
 */

#include "t89efac1a.h"

void t89efac1a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_18ee471, base, current);
  current = ptr + 0x4;
  readData(&unk_853fbfe, base, current);
  current = ptr + 0x8;
  readData(&unk_147fba4, base, current);
  current = ptr + 0xc;
  readData(&unk_ab8c232, base, current);
  current = ptr + 0x10;
  readData(&pSkuTransaction, base, current);
  ptr += 0x14;
}
