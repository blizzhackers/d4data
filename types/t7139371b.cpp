/**
 * Definition: t7139371b
 * Hash: 7139371b
 */

#include "t7139371b.h"

void t7139371b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&wpPos, base, current);
  current = ptr + 0x1c;
  readData(&unk_3e7e17e, base, current);
  current = ptr + 0x20;
  readData(&unk_de913dd, base, current);
  ptr += 0x24;
}
