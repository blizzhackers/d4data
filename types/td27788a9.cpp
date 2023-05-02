/**
 * Definition: td27788a9
 * Hash: d27788a9
 */

#include "td27788a9.h"

void td27788a9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&tItemId, base, current);
  current = ptr + 0x28;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x30;
  readData(&nCurrencyAmount, base, current);
  ptr += 0x38;
}
