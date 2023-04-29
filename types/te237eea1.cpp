/**
 * Definition: te237eea1
 * Hash: e237eea1
 */

#include "te237eea1.h"

void te237eea1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
