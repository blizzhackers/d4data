/**
 * Definition: Currencies
 * Hash: bbfb1fd3
 */

#include "Currencies.h"

void Currencies::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&unk_490dc23, base, ptr);
  readData(&unk_5adf42e, base, ptr);
  readData(&unk_14e1476, base, ptr);
  readData(&gbidCategory, base, ptr);
  readData(&arItems, base, ptr);
  readData(&unk_a7aad4d, base, ptr);
}
