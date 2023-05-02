/**
 * Definition: tb8e06bbf
 * Hash: b8e06bbf
 */

#include "tb8e06bbf.h"

void tb8e06bbf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBlendCase, base, current);
  current = ptr + 0xc;
  readData(&unk_23a523d, base, current);
  current = ptr + 0x18;
  readData(&tCondition, base, current);
  current = ptr + 0x38;
  readData(&dwChildIndex, base, current);
  ptr += 0x40;
}
