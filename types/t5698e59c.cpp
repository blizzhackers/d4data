/**
 * Definition: t5698e59c
 * Hash: 5698e59c
 */

#include "t5698e59c.h"

void t5698e59c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_3017b36, base, current);
  current = ptr + 0x14;
  readData(&snoObserver, base, current);
  current = ptr + 0x18;
  readData(&unk_5d1452b, base, current);
  current = ptr + 0x1c;
  readData(&unk_4f5ad49, base, current);
  current = ptr + 0x20;
  readData(&unk_fef4192, base, current);
  ptr += 0x28;
}
