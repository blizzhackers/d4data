/**
 * Definition: CurrencyModifiedMessage
 * Hash: 7aa9b471
 */

#include "CurrencyModifiedMessage.h"

void CurrencyModifiedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bPlayEffects, base, current);
  current = ptr + 0x18;
  readData(&nAmount, base, current);
  current = ptr + 0x20;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x24;
  readData(&eReason, base, current);
  ptr += 0x28;
}
