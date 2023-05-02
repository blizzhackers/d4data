/**
 * Definition: t6c0b8317
 * Hash: 6c0b8317
 */

#include "t6c0b8317.h"

void t6c0b8317::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_eeaddc2, base, current);
  ptr += 0x14;
}
