/**
 * Definition: tab2d8e94
 * Hash: ab2d8e94
 */

#include "tab2d8e94.h"

void tab2d8e94::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoReputation, base, current);
  current = ptr + 0x4;
  readData(&nValue, base, current);
  ptr += 0x8;
}
