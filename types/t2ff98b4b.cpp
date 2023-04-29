/**
 * Definition: t2ff98b4b
 * Hash: 2ff98b4b
 */

#include "t2ff98b4b.h"

void t2ff98b4b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tParams, base, ptr);
}
