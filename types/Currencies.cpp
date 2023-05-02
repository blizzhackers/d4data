/**
 * Definition: Currencies
 * Hash: bbfb1fd3
 */

#include "Currencies.h"

void Currencies::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x108;
  readData(&unk_490dc23, base, current);
  current = ptr + 0x10c;
  readData(&unk_5adf42e, base, current);
  current = ptr + 0x110;
  readData(&unk_14e1476, base, current);
  current = ptr + 0x120;
  readData(&gbidCategory, base, current);
  current = ptr + 0x128;
  readData(&arItems, base, current);
  current = ptr + 0x138;
  readData(&unk_a7aad4d, base, current);
  ptr += 0x140;
}
