/**
 * Definition: t63701e68
 * Hash: 63701e68
 */

#include "t63701e68.h"

void t63701e68::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwEntranceName, base, ptr);
  readData(&unk_336454f, base, ptr);
}
