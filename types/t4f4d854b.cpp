/**
 * Definition: t4f4d854b
 * Hash: 4f4d854b
 */

#include "t4f4d854b.h"

void t4f4d854b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tName, base, current);
  current = ptr + 0x4;
  readData(&tParent, base, current);
  ptr += 0x8;
}
