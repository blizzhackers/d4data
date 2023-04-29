/**
 * Definition: CurrencyModifiedMessage
 * Hash: 7aa9b471
 */

#include "CurrencyModifiedMessage.h"

void CurrencyModifiedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bPlayEffects, base, ptr);
  readData(&nAmount, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&eReason, base, ptr);
}
