/**
 * Definition: tb8f7438
 * Hash: b8f7438
 */

#include "tb8f7438.h"

void tb8f7438::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&unk_2d67281, base, ptr);
}
