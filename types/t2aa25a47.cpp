/**
 * Definition: t2aa25a47
 * Hash: 2aa25a47
 */

#include "t2aa25a47.h"

void t2aa25a47::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ae25fc7, base, current);
  current = ptr + 0x28;
  readData(&unk_cf0ad45, base, current);
  ptr += 0x40;
}
