/**
 * Definition: td69abd75
 * Hash: d69abd75
 */

#include "td69abd75.h"

void td69abd75::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwEnd, base, current);
  current = ptr + 0x14;
  readData(&unk_42cd606, base, current);
  ptr += 0x1c;
}
