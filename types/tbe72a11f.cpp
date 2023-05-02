/**
 * Definition: tbe72a11f
 * Hash: be72a11f
 */

#include "tbe72a11f.h"

void tbe72a11f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPlayer, base, current);
  current = ptr + 0x18;
  readData(&unk_76098e5, base, current);
  current = ptr + 0x1c;
  readData(&unk_d5b8271, base, current);
  current = ptr + 0x20;
  readData(&unk_7888959, base, current);
  ptr += 0x24;
}
