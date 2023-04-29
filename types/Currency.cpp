/**
 * Definition: Currency
 * Hash: 15ccbfab
 */

#include "Currency.h"

void Currency::read(const char* base, char* &ptr) {
  readData(&eCurrencyType, base, ptr);
  readData(&nCurrencyAmount, base, ptr);
}
