/**
 * Definition: t1aa682eb
 * Hash: 1aa682eb
 */

#include "t1aa682eb.h"

void t1aa682eb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&nCurrencyAmount, base, ptr);
}
