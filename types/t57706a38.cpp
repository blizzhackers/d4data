/**
 * Definition: t57706a38
 * Hash: 57706a38
 */

#include "t57706a38.h"

void t57706a38::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arConditions, base, ptr);
}
