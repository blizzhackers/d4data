/**
 * Definition: tef4e42e5
 * Hash: ef4e42e5
 */

#include "tef4e42e5.h"

void tef4e42e5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_97fcdff, base, current);
  current = ptr + 0x14;
  readData(&snoLevelArea, base, current);
  ptr += 0x18;
}
