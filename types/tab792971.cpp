/**
 * Definition: tab792971
 * Hash: ab792971
 */

#include "tab792971.h"

void tab792971::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
