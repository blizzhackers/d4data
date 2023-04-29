/**
 * Definition: t7e418ba8
 * Hash: 7e418ba8
 */

#include "t7e418ba8.h"

void t7e418ba8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
