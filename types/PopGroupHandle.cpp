/**
 * Definition: PopGroupHandle
 * Hash: fabd7fa8
 */

#include "PopGroupHandle.h"

void PopGroupHandle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPopulation, base, current);
  current = ptr + 0x4;
  readData(&gbidType, base, current);
  current = ptr + 0x8;
  readData(&nID, base, current);
  ptr += 0xc;
}
