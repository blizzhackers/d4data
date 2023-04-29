/**
 * Definition: te8edfab7
 * Hash: e8edfab7
 */

#include "te8edfab7.h"

void te8edfab7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
