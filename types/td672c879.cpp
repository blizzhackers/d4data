/**
 * Definition: td672c879
 * Hash: d672c879
 */

#include "td672c879.h"

void td672c879::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
