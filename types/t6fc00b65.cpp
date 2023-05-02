/**
 * Definition: t6fc00b65
 * Hash: 6fc00b65
 */

#include "t6fc00b65.h"

void t6fc00b65::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&tItemId, base, current);
  current = ptr + 0x28;
  readData(&unk_cc95a19, base, current);
  ptr += 0x30;
}
