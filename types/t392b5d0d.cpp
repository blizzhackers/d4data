/**
 * Definition: t392b5d0d
 * Hash: 392b5d0d
 */

#include "t392b5d0d.h"

void t392b5d0d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&tItemId, base, current);
  current = ptr + 0x28;
  readData(&ann, base, current);
  ptr += 0x30;
}
