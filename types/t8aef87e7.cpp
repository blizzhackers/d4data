/**
 * Definition: t8aef87e7
 * Hash: 8aef87e7
 */

#include "t8aef87e7.h"

void t8aef87e7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&height, base, current);
  current = ptr + 0x4;
  readData(&material, base, current);
  current = ptr + 0x6;
  readData(&gameFlags, base, current);
  current = ptr + 0x7;
  readData(&unk_38adf8e, base, current);
  ptr += 0x8;
}
