/**
 * Definition: tcb10b4b2
 * Hash: cb10b4b2
 */

#include "tcb10b4b2.h"

void tcb10b4b2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
