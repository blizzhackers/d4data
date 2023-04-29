/**
 * Definition: tcedf8981
 * Hash: cedf8981
 */

#include "tcedf8981.h"

void tcedf8981::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
