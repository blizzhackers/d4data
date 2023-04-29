/**
 * Definition: t5a4decc9
 * Hash: 5a4decc9
 */

#include "t5a4decc9.h"

void t5a4decc9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
