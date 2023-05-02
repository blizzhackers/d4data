/**
 * Definition: t77aada63
 * Hash: 77aada63
 */

#include "t77aada63.h"

void t77aada63::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0x4;
  readData(&tValueMax, base, current);
  current = ptr + 0x8;
  readData(&tTime, base, current);
  ptr += 0xc;
}
