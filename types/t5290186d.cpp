/**
 * Definition: t5290186d
 * Hash: 5290186d
 */

#include "t5290186d.h"

void t5290186d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_2883a68, base, current);
  current = ptr + 0x14;
  readData(&annItem, base, current);
  ptr += 0x1c;
}
