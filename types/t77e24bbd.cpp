/**
 * Definition: t77e24bbd
 * Hash: 77e24bbd
 */

#include "t77e24bbd.h"

void t77e24bbd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0x4;
  readData(&tValueMax, base, current);
  current = ptr + 0x8;
  readData(&tTime, base, current);
  ptr += 0xc;
}
