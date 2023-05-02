/**
 * Definition: t2a9bceb0
 * Hash: 2a9bceb0
 */

#include "t2a9bceb0.h"

void t2a9bceb0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_756ebc1, base, current);
  ptr += 0x20;
}
