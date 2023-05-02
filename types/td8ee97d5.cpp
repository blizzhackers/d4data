/**
 * Definition: td8ee97d5
 * Hash: d8ee97d5
 */

#include "td8ee97d5.h"

void td8ee97d5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  current = ptr + 0x4;
  readData(&dwHashFlag, base, current);
  ptr += 0x8;
}
