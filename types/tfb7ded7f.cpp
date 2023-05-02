/**
 * Definition: tfb7ded7f
 * Hash: fb7ded7f
 */

#include "tfb7ded7f.h"

void tfb7ded7f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  ptr += 0x20;
}
