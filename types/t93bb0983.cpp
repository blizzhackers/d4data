/**
 * Definition: t93bb0983
 * Hash: 93bb0983
 */

#include "t93bb0983.h"

void t93bb0983::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arParams, base, ptr);
}
