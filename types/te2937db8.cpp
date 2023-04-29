/**
 * Definition: te2937db8
 * Hash: e2937db8
 */

#include "te2937db8.h"

void te2937db8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
