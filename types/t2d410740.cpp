/**
 * Definition: t2d410740
 * Hash: 2d410740
 */

#include "t2d410740.h"

void t2d410740::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptProxData, base, current);
  current = ptr + 0x18;
  readData(&unk_6d3dfe6, base, current);
  current = ptr + 0x1c;
  readData(&unk_a183154, base, current);
  current = ptr + 0x20;
  readData(&unk_6a602d7, base, current);
  current = ptr + 0x24;
  readData(&unk_c68b42, base, current);
  current = ptr + 0x28;
  readData(&unk_77f6d53, base, current);
  current = ptr + 0x2c;
  readData(&unk_da484be, base, current);
  ptr += 0x30;
}
