/**
 * Definition: tfbeaa6f5
 * Hash: fbeaa6f5
 */

#include "tfbeaa6f5.h"

void tfbeaa6f5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_2838d01, base, current);
  current = ptr + 0x14;
  readData(&szSubObjectName, base, current);
  current = ptr + 0x18;
  readData(&unk_5302075, base, current);
  ptr += 0x50;
}
