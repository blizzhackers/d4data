/**
 * Definition: t348fa404
 * Hash: 348fa404
 */

#include "t348fa404.h"

void t348fa404::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_75ac63e, base, ptr);
}
