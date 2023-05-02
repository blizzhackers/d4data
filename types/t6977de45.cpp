/**
 * Definition: t6977de45
 * Hash: 6977de45
 */

#include "t6977de45.h"

void t6977de45::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eKey, base, current);
  current = ptr + 0x4;
  readData(&dwModifiers, base, current);
  current = ptr + 0x8;
  readData(&unk_51406ef, base, current);
  current = ptr + 0xc;
  readData(&unk_a9a85be, base, current);
  ptr += 0x10;
}
