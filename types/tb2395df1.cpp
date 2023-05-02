/**
 * Definition: tb2395df1
 * Hash: b2395df1
 */

#include "tb2395df1.h"

void tb2395df1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&snoQuest, base, current);
  ptr += 0x8;
}
