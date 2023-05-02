/**
 * Definition: ta5df0191
 * Hash: a5df0191
 */

#include "ta5df0191.h"

void ta5df0191::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eAttribute, base, current);
  current = ptr + 0x4;
  readData(&flBonus, base, current);
  ptr += 0x8;
}
