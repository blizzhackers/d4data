/**
 * Definition: t3335f1c5
 * Hash: 3335f1c5
 */

#include "t3335f1c5.h"

void t3335f1c5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
