/**
 * Definition: MarkerItemData
 * Hash: 1aa682eb
 */

#include "MarkerItemData.h"

void MarkerItemData::read(const char* base, char* &ptr) {
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
