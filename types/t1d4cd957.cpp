/**
 * Definition: t1d4cd957
 * Hash: 1d4cd957
 */

#include "t1d4cd957.h"

void t1d4cd957::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&annItem, base, current);
  current = ptr + 0x1c;
  readData(&nBankTab, base, current);
  current = ptr + 0x20;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x28;
  readData(&nCurrencyAmount, base, current);
  ptr += 0x30;
}
