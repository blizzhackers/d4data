/**
 * Definition: t1d4cd957
 * Hash: 1d4cd957
 */

#include "t1d4cd957.h"

void t1d4cd957::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&unk_7142da1, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&nCurrencyAmount, base, ptr);
}
