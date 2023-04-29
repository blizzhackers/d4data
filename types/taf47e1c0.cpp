/**
 * Definition: taf47e1c0
 * Hash: af47e1c0
 */

#include "taf47e1c0.h"

void taf47e1c0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_e0aad12, base, ptr);
}
