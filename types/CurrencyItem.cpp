/**
 * Definition: CurrencyItem
 * Hash: a8549fba
 */

#include "CurrencyItem.h"

void CurrencyItem::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x8;
  readData(&unk_c5b5acd, base, current);
  ptr += 0x10;
}
