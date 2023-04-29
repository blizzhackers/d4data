/**
 * Definition: tbe07b3da
 * Hash: be07b3da
 */

#include "tbe07b3da.h"

void tbe07b3da::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_9d67ea6, base, ptr);
}
