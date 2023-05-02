/**
 * Definition: Currency
 * Hash: 15ccbfab
 */

#include "Currency.h"

void Currency::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x8;
  readData(&nCurrencyAmount, base, current);
  ptr += 0x10;
}
