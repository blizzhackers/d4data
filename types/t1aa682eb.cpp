/**
 * Definition: t1aa682eb
 * Hash: 1aa682eb
 */

#include "t1aa682eb.h"

void t1aa682eb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x14;
  readData(&nCurrencyAmount, base, current);
  ptr += 0x18;
}
