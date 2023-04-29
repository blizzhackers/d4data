/**
 * Definition: tce454926
 * Hash: ce454926
 */

#include "tce454926.h"

void tce454926::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_e4e2cd2, base, ptr);
}
