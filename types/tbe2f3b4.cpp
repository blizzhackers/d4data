/**
 * Definition: tbe2f3b4
 * Hash: be2f3b4
 */

#include "tbe2f3b4.h"

void tbe2f3b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&reason, base, current);
  ptr += 0x14;
}
