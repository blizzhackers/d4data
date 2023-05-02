/**
 * Definition: t2ff98b4b
 * Hash: 2ff98b4b
 */

#include "t2ff98b4b.h"

void t2ff98b4b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tParams, base, current);
  ptr += 0x3e8;
}
