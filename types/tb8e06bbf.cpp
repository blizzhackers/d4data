/**
 * Definition: tb8e06bbf
 * Hash: b8e06bbf
 */

#include "tb8e06bbf.h"

void tb8e06bbf::read(const char* base, char* &ptr) {
  readData(&tBlendCase, base, ptr);
  readData(&unk_23a523d, base, ptr);
  readData(&tCondition, base, ptr);
  readData(&dwChildIndex, base, ptr);
}
