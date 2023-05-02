/**
 * Definition: tb8f7438
 * Hash: b8f7438
 */

#include "tb8f7438.h"

void tb8f7438::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x18;
  readData(&unk_2d67281, base, current);
  ptr += 0x20;
}
