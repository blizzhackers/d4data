/**
 * Definition: t14c5741
 * Hash: 14c5741
 */

#include "t14c5741.h"

void t14c5741::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&szToolTip, base, current);
  current = ptr + 0x20;
  readData(&unk_479d177, base, current);
  ptr += 0x30;
}
