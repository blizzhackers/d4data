/**
 * Definition: tadf79afe
 * Hash: adf79afe
 */

#include "tadf79afe.h"

void tadf79afe::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
