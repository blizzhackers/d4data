/**
 * Definition: tcfbf8bdc
 * Hash: cfbf8bdc
 */

#include "tcfbf8bdc.h"

void tcfbf8bdc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
