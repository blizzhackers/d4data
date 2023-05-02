/**
 * Definition: t313c5815
 * Hash: 313c5815
 */

#include "t313c5815.h"

void t313c5815::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_ce10c35, base, current);
  current = ptr + 0x20;
  readData(&unk_43081cf, base, current);
  current = ptr + 0x30;
  readData(&unk_cd7797a, base, current);
  ptr += 0x40;
}
