/**
 * Definition: tcb10b4b2
 * Hash: cb10b4b2
 */

#include "tcb10b4b2.h"

void tcb10b4b2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
