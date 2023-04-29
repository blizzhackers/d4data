/**
 * Definition: tb9ad4599
 * Hash: b9ad4599
 */

#include "tb9ad4599.h"

void tb9ad4599::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_fcb7313, base, ptr);
  readData(&unk_d0d932b, base, ptr);
  readData(&unk_9a8200e, base, ptr);
}
