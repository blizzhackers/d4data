/**
 * Definition: t37b71f34
 * Hash: 37b71f34
 */

#include "t37b71f34.h"

void t37b71f34::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_a1f5263, base, ptr);
  readData(&unk_ef69835, base, ptr);
}
