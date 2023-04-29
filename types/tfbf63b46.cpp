/**
 * Definition: tfbf63b46
 * Hash: fbf63b46
 */

#include "tfbf63b46.h"

void tfbf63b46::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_65f1ff6, base, ptr);
}
