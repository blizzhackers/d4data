/**
 * Definition: tb921f709
 * Hash: b921f709
 */

#include "tb921f709.h"

void tb921f709::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eItemQualityLevel, base, ptr);
}
