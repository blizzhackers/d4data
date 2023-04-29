/**
 * Definition: tb3672fde
 * Hash: b3672fde
 */

#include "tb3672fde.h"

void tb3672fde::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_fb4d244, base, ptr);
}
