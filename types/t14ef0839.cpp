/**
 * Definition: t14ef0839
 * Hash: 14ef0839
 */

#include "t14ef0839.h"

void t14ef0839::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&unk_d8caf57, base, ptr);
  readData(&arPetType, base, ptr);
}
