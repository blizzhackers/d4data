/**
 * Definition: td27788a9
 * Hash: d27788a9
 */

#include "td27788a9.h"

void td27788a9::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tItemId, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&nCurrencyAmount, base, ptr);
}
