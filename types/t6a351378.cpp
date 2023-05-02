/**
 * Definition: t6a351378
 * Hash: 6a351378
 */

#include "t6a351378.h"

void t6a351378::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_dd5d06c, base, current);
  ptr += 0x28;
}
