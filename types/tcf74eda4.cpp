/**
 * Definition: tcf74eda4
 * Hash: cf74eda4
 */

#include "tcf74eda4.h"

void tcf74eda4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
