/**
 * Definition: t99d2f9b4
 * Hash: 99d2f9b4
 */

#include "t99d2f9b4.h"

void t99d2f9b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_d8a1f3b, base, current);
  ptr += 0x58;
}
