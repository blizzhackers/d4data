/**
 * Definition: tc69c1754
 * Hash: c69c1754
 */

#include "tc69c1754.h"

void tc69c1754::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szText, base, ptr);
}
