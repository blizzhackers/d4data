/**
 * Definition: t76e55dbd
 * Hash: 76e55dbd
 */

#include "t76e55dbd.h"

void t76e55dbd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
