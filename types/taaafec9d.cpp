/**
 * Definition: taaafec9d
 * Hash: aaafec9d
 */

#include "taaafec9d.h"

void taaafec9d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  ptr += 0x20;
}
