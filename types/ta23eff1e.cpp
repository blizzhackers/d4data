/**
 * Definition: ta23eff1e
 * Hash: a23eff1e
 */

#include "ta23eff1e.h"

void ta23eff1e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
