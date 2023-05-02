/**
 * Definition: td214b596
 * Hash: d214b596
 */

#include "td214b596.h"

void td214b596::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
