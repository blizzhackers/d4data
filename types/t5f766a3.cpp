/**
 * Definition: t5f766a3
 * Hash: 5f766a3
 */

#include "t5f766a3.h"

void t5f766a3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&szData, base, current);
  ptr += 0x18;
}
