/**
 * Definition: tec9d1911
 * Hash: ec9d1911
 */

#include "tec9d1911.h"

void tec9d1911::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
