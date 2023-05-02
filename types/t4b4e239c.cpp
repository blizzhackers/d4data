/**
 * Definition: t4b4e239c
 * Hash: 4b4e239c
 */

#include "t4b4e239c.h"

void t4b4e239c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eCrafterType, base, current);
  ptr += 0x14;
}
