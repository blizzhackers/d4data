/**
 * Definition: t348fa404
 * Hash: 348fa404
 */

#include "t348fa404.h"

void t348fa404::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_75ac63e, base, current);
  ptr += 0x18;
}
