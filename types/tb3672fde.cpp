/**
 * Definition: tb3672fde
 * Hash: b3672fde
 */

#include "tb3672fde.h"

void tb3672fde::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_fb4d244, base, current);
  ptr += 0x20;
}
