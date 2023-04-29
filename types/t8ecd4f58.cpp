/**
 * Definition: t8ecd4f58
 * Hash: 8ecd4f58
 */

#include "t8ecd4f58.h"

void t8ecd4f58::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
