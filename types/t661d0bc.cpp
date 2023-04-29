/**
 * Definition: t661d0bc
 * Hash: 661d0bc
 */

#include "t661d0bc.h"

void t661d0bc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
