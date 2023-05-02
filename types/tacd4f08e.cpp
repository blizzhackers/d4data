/**
 * Definition: tacd4f08e
 * Hash: acd4f08e
 */

#include "tacd4f08e.h"

void tacd4f08e::read(const char* base, char* &ptr) {
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
  readData(&unk_283d1ad, base, current);
  current = ptr + 0x24;
  readData(&nValue, base, current);
  ptr += 0x28;
}
