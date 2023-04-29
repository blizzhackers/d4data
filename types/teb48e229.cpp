/**
 * Definition: teb48e229
 * Hash: eb48e229
 */

#include "teb48e229.h"

void teb48e229::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
