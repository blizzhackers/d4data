/**
 * Definition: SubObjectNameInfo
 * Hash: c4bb496e
 */

#include "SubObjectNameInfo.h"

void SubObjectNameInfo::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_551fc93, base, ptr);
  readData(&dwState, base, ptr);
  readData(&dwStyle, base, ptr);
  readData(&unk_82bbe21, base, ptr);
  readData(&unk_d9c73f4, base, ptr);
  readData(&unk_a6e7ff2, base, ptr);
  readData(&unk_c15f7d2, base, ptr);
  readData(&unk_92fdd14, base, ptr);
  readData(&unk_b0b7d46, base, ptr);
}
