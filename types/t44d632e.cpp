/**
 * Definition: t44d632e
 * Hash: 44d632e
 */

#include "t44d632e.h"

void t44d632e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flX, base, current);
  current = ptr + 0x4;
  readData(&flY, base, current);
  ptr += 0x8;
}
