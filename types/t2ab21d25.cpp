/**
 * Definition: t2ab21d25
 * Hash: 2ab21d25
 */

#include "t2ab21d25.h"

void t2ab21d25::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_43081cf, base, current);
  ptr += 0x20;
}
