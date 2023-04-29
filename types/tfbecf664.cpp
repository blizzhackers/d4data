/**
 * Definition: tfbecf664
 * Hash: fbecf664
 */

#include "tfbecf664.h"

void tfbecf664::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
